#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_LEN 100

typedef struct Stack {
int top;
char items[MAX_LEN];
} Stack;

int prec(char c) {
if (c == '^')
return 3;
else if (c == '*' || c == '/')
return 2;
else if (c == '+' || c == '-')
return 1;
else
return -1;
}

bool isEmpty(Stack *stack) {
return stack->top == -1;
}

bool isFull(Stack *stack) {
return stack->top == MAX_LEN - 1;
}

void push(Stack *stack, char item) {
if (!isFull(stack)) {
stack->items[++stack->top] = item;
}
}

char pop(Stack *stack) {
if (!isEmpty(stack)) {
return stack->items[stack->top--];
}
return '\0';
}

char peek(Stack *stack) {
if (!isEmpty(stack)) {
return stack->items[stack->top];
}
return '\0';
}

void infixToPostfix(const char *exp) {
int len = strlen(exp);
Stack stack;
stack.top = -1;
char postfix[MAX_LEN];
int j = 0;

for (int i = 0; i < len; i++) {
if (isalpha(exp[i])) {
postfix[j++] = exp[i];
} else if (exp[i] == '(') {
push(&stack, exp[i]);
} else if (exp[i] == ')') {
while (peek(&stack) != '(') {
postfix[j++] = pop(&stack);
}
pop(&stack);
} else {
while (!isEmpty(&stack) && prec(peek(&stack)) >= prec(exp[i])) {
postfix[j++] = pop(&stack);
}
push(&stack, exp[i]);
}
}

while (!isEmpty(&stack)) {
postfix[j++] = pop(&stack);
}

postfix[j] = '\0';
printf("%s\n", postfix);
}

int main() {
char exp[MAX_LEN];
scanf("%s", exp);
infixToPostfix(exp);
return 0;
}
