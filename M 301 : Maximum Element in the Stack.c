#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX_SIZE 100000
typedef struct {
    int top;
    int data[MAX_SIZE];
    int max[MAX_SIZE];
} 
Stack;
void push(Stack *stack, int item) {
    stack->data[++stack->top] = item;
    if (stack->top == 0) {
        stack->max[stack->top] = item;
    } else {
        int max = (stack->max[stack->top - 1] > item) ? stack->max[stack->top - 1] : item;
        stack->max[stack->top] = max;
    }
}
void pop(Stack *stack) {
    if (stack->top >= 0) {
        stack->top--;
    }
}
int get_max(Stack *stack) {
    return stack->max[stack->top];
}

int main() {
    int n, i, type, x;
    Stack stack;
    stack.top = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &type);
        switch (type) {
            case 1:
                scanf("%d", &x);
                push(&stack, x);
                break;
            case 2:
                pop(&stack);
                break;
            case 3:
                printf("%d\n", get_max(&stack));
                break;
        }
    }
    return 0;
}
