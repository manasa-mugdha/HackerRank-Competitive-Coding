#include <stdio.h>
#include <stdlib.h>

const char* isLeapYear(int year) {
    if (year % 4 == 0) {
        return "yes";
    } else {
        return "no";
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int years[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &years[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", isLeapYear(years[i]));
    }
    return 0;
}
