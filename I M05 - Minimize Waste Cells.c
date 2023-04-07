#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1001]; scanf("%[^\n]s",s);
    int n = ceil(sqrt(strlen(s)));
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[k]){
                printf("%c",s[k]); k++;
            }
            else printf("?");
        }
        printf("\n");}
    }
    return 0;
}
