#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    char temp = str[0];
    for (int i = 0; i < len - 1; i++) {
        str[i] = str[i + 1];
    }
    str[len - 1] = temp;
    printf("%s\n", str);
    return 0;
}
