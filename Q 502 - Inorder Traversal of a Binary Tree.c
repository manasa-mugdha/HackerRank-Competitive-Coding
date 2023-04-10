#include <stdio.h>
#include <stdlib.h>
void inorder(int *a, int node, int n) {
  if (node >= n || a[node] == 0) {
    return;
  }
  inorder(a, 2 * node + 1, n);
  printf("%d ", a[node]);
  inorder(a, 2 * node + 2, n);
}
int main() {
  int n;
  scanf("%d", &n);
  int *a = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  inorder(a, 0, n);
  return 0;
}
