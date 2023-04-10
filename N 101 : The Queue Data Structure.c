#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct queueNode {
    int data;
    struct queueNode *next;
};
typedef struct queueNode queueNode;
queueNode *head = NULL;

queueNode* newNode(int val) {
    queueNode *temp = (queueNode*) malloc(sizeof(queueNode));
    temp->data = val;
    temp->next = NULL;
    return temp;
}
void push(int val) {
    queueNode *temp, *temp1;
    temp = newNode(val);
    if (head == NULL) {
        head = temp;
    } else {
        temp1 = head;
        while (temp1->next != NULL) {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}
void pop() {
    queueNode *temp1;

    temp1 = head;
    head = head->next;
    temp1->next = NULL;
}
int top() {
    return head->data;
}
int empty() {
    return (head == NULL);
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char s[50];
        int x;
        scanf(" %s", s);
        if (s[0] == 't') {
            if (empty()) printf("Invalid\n");
            else                
                printf("%d\n", top());
        } else if (s[0] == 'p' && s[1] == 'o') {
            if (empty()) printf("Invalid\n");
            else    pop();
        } else {
            scanf(" %d", &x);
            push(x);
        }
    }
    return 0;
}
