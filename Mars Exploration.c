#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* S = (char *)malloc(10240 * sizeof(char));
    scanf("%s",S);
    int len = strlen(S);
    int iTemp = 0;
    int alt = 0;
    for(iTemp=0;iTemp<len;iTemp=iTemp+3)
    {
            if(S[iTemp] != 'S')
            {
                alt++;
            }
            if(S[iTemp+1] != 'O')
            {
                alt++;    
            }
            if(S[iTemp+2] != 'S')
            {
                alt++;    
            }
    }
    printf("%d\n",alt);
    return 0;
}


