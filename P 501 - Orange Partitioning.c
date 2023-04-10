#include<stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n, i, j, k = 0;
    scanf("%d", &n);
    int orange[n];
    for (i = 0; i < n; i++)
        scanf("%d", &orange[i]);
    for (i = 0; i < n - 1; i++) {
        if (orange[i] <= orange[n - 1]) {
            swap(&orange[i], &orange[k]);
            k++;
        }
    }
    swap(&orange[k], &orange[n - 1]);
    for (i = 0; i < n; i++)
        printf("%d ", orange[i]);
    return 0;
}
