#include <string.h>
#include <stdbool.h>

bool isPalindrome(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100];
    scanf("%s", str);
    if (isPalindrome(str)) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}
