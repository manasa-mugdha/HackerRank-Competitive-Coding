
#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int a[], int l, int r) {
    int x = a[r];
    int i = (l - 1);
    for (int j = l; j <= r - 1; j++) {
        if (a[j] <= x) {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[r]);
    return (i + 1);
}
void Quicksort(int a[], int l, int r) {
    int i, p;
    if (l < r) {
        p = partition(a, l, r);
        printf("%d\n", p);
        for (i = l; i <= r; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
        Quicksort(a, l, p - 1);
        Quicksort(a, p + 1, r);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n], i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    Quicksort(a, 0, n - 1);

    return 0;
}

