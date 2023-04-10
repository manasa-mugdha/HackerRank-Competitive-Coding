#include <stdio.h>
int MaxBinaryStringLen(int n, int arr[]) {
    int max_len = 0;
    int cur_len = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            cur_len++;
        } else {
            if (cur_len > max_len) {
                max_len = cur_len;
            }
            cur_len = 0;
        }
    }
    if (cur_len > max_len) {
        max_len = cur_len;
    }
    return max_len;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", MaxBinaryStringLen(n, arr));
    return 0;
}
