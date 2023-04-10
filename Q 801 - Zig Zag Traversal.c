#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_N 100001
struct Node {
  int left, right;
};
struct Node tree[MAX_N];
int n;
void zigzag_traverse(int root, bool direction) {
  int stack1[MAX_N], stack2[MAX_N];
  int top1 = -1, top2 = -1;
  stack1[++top1] = root;
  while (top1 >= 0 || top2 >= 0) {
    while (top1 >= 0) {
      int node = stack1[top1--];
      printf("%d ", node);
      if (direction) {
        if (tree[node].left != -1) stack2[++top2] = tree[node].left;
        if (tree[node].right != -1) stack2[++top2] = tree[node].right;
      } else {
        if (tree[node].right != -1) stack2[++top2] = tree[node].right;
        if (tree[node].left != -1) stack2[++top2] = tree[node].left;
      }
    }
    direction = !direction;
    while (top2 >= 0) {
      int node = stack2[top2--];
      printf("%d ", node);
      if (direction) {
        if (tree[node].left != -1) stack1[++top1] = tree[node].left;
        if (tree[node].right != -1) stack1[++top1] = tree[node].right;
      } else {
        if (tree[node].right != -1) stack1[++top1] = tree[node].right;
        if (tree[node].left != -1) stack1[++top1] = tree[node].left;
      }
    }



    direction = !direction;
  }
}

int main() {
  int i, x, y;
  char c[2];
  scanf("%d", &n);
  memset(tree, -1, sizeof tree);
  for (i = 0; i < n - 1; i++) {
    scanf("%d%d%s", &x, &y, c);
    if (c[0] == 'L') tree[x].left = y;
    else tree[x].right = y;
  }
  zigzag_traverse(1, true);
  return 0;
}
