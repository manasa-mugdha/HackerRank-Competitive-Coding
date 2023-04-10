#include<stdio.h>
#include<string.h>
int search(char arr[], char x, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (arr[i] == x)
{
return i;
}
}
return -1;
}
void printPostOrder(char in[], char pre[], int n)
{
int root = search(in, pre[0], n);
if (root != 0)
{
printPostOrder(in, pre + 1, root);
}
if (root != n - 1)
{
printPostOrder(in + root + 1, pre + root + 1, n - root - 1);
}
printf("%c", pre[0]);
}
int main()
{
char pre[100],in[100];
scanf("%s",in);
scanf("%s",pre);
int n=strlen(in);
printPostOrder(in, pre, n);
return 0;
}

