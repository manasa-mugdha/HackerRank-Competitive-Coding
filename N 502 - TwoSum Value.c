#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare (const void * a, const void * b) {
  return ( *(int*)a - *(int*)b );
}

int main() {
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    int tar;
    scanf("%d", &tar);
    int count = 0;
    qsort(arr, a, sizeof(int), compare);
    for (int i = 0; i < a; i++) {
        int k = tar - arr[i];
        if (bsearch(&k, arr, a, sizeof(int), compare)) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
