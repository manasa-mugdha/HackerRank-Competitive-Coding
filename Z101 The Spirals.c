#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int mat[n][n];

    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1;

    while (num <= n * n) {
        for (int i = left; i <= right; i++) {
            mat[top][i] = num;
            num++;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            mat[i][right] = num;
            num++;
        }
        right--;

        for (int i = right; i >= left; i--) {
            mat[bottom][i] = num;
            num++;
        }
        bottom--;

        for (int i = bottom; i >= top; i--) {
            mat[i][left] = num;
            num++;
        }
        left++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
