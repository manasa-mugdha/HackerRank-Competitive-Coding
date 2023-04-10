#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int b[m];
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    qsort(a, n, sizeof(int), cmp);
    for (i = 0; i < m; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (a[j] <= b[i])
                count++;
            else
                break;
        }
        printf("%d ", count);
    }
    return 0;
}
