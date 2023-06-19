#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void* a, const void* b) {
    char ab[21];  
    char ba[21];  
    sprintf(ab, "%d%d", *(int*)a, *(int*)b);
    sprintf(ba, "%d%d", *(int*)b, *(int*)a);
    return strcmp(ba, ab);
}

char* largestNumber(int* nums, int numsSize) 
{
    char** strNums = (char**)malloc(numsSize * sizeof(char*));
    for (int i = 0; i < numsSize; i++) 
    {
        strNums[i] = (char*)malloc(11 * sizeof(char));  // Maximum number of digits in input
        sprintf(strNums[i], "%d", nums[i]);
    }

    qsort(strNums, numsSize, sizeof(char*), compare);
    
    char* result = (char*)malloc(1001 * sizeof(char));  
    result[0] = '\0';  
    
    for (int i = 0; i < numsSize; i++) {
        strcat(result, strNums[i]);
    }
    
    // Free memory
    for (int i = 0; i < numsSize; i++) {
        free(strNums[i]);
    }
    free(strNums);
    
    return result;
}

int main() {
    int N;
    scanf("%d", &N);
    int* nums = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }
    
    char* result = largestNumber(nums, N);
    printf("%s\n", result);
    free(nums);
    free(result);
    return 0;
}
