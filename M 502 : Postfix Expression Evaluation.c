#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 100
typedef struct {
    int top;
    int data[MAX_SIZE];
} Stack;

void push(Stack *stack, int item) {
    stack->data[++stack->top] = item;
}
int pop(Stack *stack) {
    return stack->data[stack->top--];
}
int eval_postfix(char *expression, int *values) {
    Stack stack;
    stack.top = -1;
    int i, a, b, result;
    for (i = 0; i < strlen(expression); i++) {
        char c = expression[i];
        if (isalpha(c)) {
            int index = c - 'A';
            push(&stack, values[index]);
        } else {
            b = pop(&stack);
            a = pop(&stack);
            switch (c) {
                case '+':
                    result = a + b;
                    break;
                case '-':
                    result = a - b;
                    break;
                case '*':
                    result = a * b;
                    break;
                case '/':
                    result = a / b;
                    break;
            }
            push(&stack, result);
        }
    }
    return pop(&stack);
}
int main() {
    char expression[MAX_SIZE];
    scanf("%s", expression);
    int values[26];
    int i;
    for (i = 0; i < 26; i++) {
        scanf("%d", &values[i]);
    }
    int result = eval_postfix(expression, values);
    printf("%d\n", result);
    return 0;
}
