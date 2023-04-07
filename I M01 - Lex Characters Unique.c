#include <stdio.h>
#include <string.h>

int main() {
    char str[1005];
    scanf("%s", str);

    int freq[26] = {0};
    for (int i = 0; i < strlen(str); i++) {
        freq[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c", i + 'a');
        }
    }
    printf("\n");
    return 0;
}
