#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int cnt[7] = {0};
    int res = 0;

    for (int i = 0; i < n; i++) {
        int rem = a[i] % 7;
        res += cnt[(7 - rem) % 7];
        cnt[rem]++;
    }

    printf("%d\n", res);
 return 0;
}
