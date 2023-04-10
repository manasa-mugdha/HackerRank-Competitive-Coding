#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long merge(int *arr, int start, int mid, int end) {
int i = start, j = mid + 1, k = 0;
int temp[end - start + 1];
long long count = 0;
    while (i <= mid && j <= end) {
    if (arr[i] <= arr[j]) {
        temp[k++] = arr[i++];
    } else {
        count += mid - i + 1;
        temp[k++] = arr[j++];
    }
}
while (i <= mid) {
    temp[k++] = arr[i++];
}
while (j <= end) {
    temp[k++] = arr[j++];
}
for (i = start, k = 0; i <= end; i++, k++) {
    arr[i] = temp[k];
}
return count;
}
long long mergeSort(int *arr, int start, int end) {
long long count = 0;
if (start < end) {
int mid = start + (end - start) / 2;
count = mergeSort(arr, start, mid);
count += mergeSort(arr, mid + 1, end);
count += merge(arr, start, mid, end);
}
return count;
}

int main() {
int n;
scanf("%d", &n);
int arr[n];
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
printf("%lld\n", mergeSort(arr, 0, n - 1));
return 0;
}
