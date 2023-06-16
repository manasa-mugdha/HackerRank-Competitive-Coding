#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 101
int cmp(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int getPrice(int arr, int cus[], int ix)
{
    return (cus[ix]+1)*arr;
}

int main(void)
{
    int i, ix;
    int N, K, sum;
    int arr[MAX], cus[MAX];
    memset(arr, 0, sizeof(arr));
    memset(cus, 0, sizeof(cus));
    scanf("%d %d", &N, &K);
    for(i = 0; i < N; ++i)
        scanf("%d", &arr[i]);
    qsort(arr, N, sizeof(int), cmp);
    sum = 0; ix = 0;
    for(i = 0; i < N; ++i){
        sum += getPrice(arr[i], cus, ix%K);
        ++cus[ix%K];
        ix = (++ix)%K;
    }
    printf("%d\n", sum);
    return 0;
}
