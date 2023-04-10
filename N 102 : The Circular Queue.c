#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"
struct queueNode{
    int data;
    struct queueNode* next;
};
typedef struct queueNode queueNode;
queueNode* head = NULL;

queueNode* newNode(int val)
{
    queueNode* t = (queueNode*) malloc(sizeof(queueNode));
    t->data = val, t->next = NULL;
    return t;
}

//BODY

void push(int val)
{
    queueNode* newNode = (queueNode*) malloc(sizeof(queueNode));
    newNode->data = val;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }
    else
    {
        queueNode* temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
    }
}

void pop()
{
    if (head == NULL)
        return;
    if (head->next == head)
    {
        free(head);
        head = NULL;
        return;
    }
    queueNode* temp = head;
    while (temp->next != head)
        temp = temp->next;
    queueNode* temp2 = head;
    head = head->next;
    temp->next = head;
    free(temp2);
}

int top()
{
    if (head == NULL)
        return -1;
    return head->data;
}

int empty()
{
    return head == NULL;
}

// TAIL

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char s[50];
        int x;
        scanf(" %s", s);
        if (s[0] == 't')
        {
            if (empty()) printf("Invalid\n");
            else                
                printf("%d\n", top());
        }
        else if (s[0] == 'p' && s[1] == 'o')
        {
            if (empty()) printf("Invalid\n");
            else    pop();
        }
        else
        {
            scanf(" %d", &x);
            push(x);
        }
    }
    return 0;
}
