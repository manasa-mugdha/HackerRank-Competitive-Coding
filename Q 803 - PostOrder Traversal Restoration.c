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
