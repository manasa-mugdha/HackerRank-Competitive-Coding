#include <stdio.h>
#include <stdlib.h>
int main() {
int n;
scanf("%d", &n);
int a[n][3];
for (int i = 0; i < n; i++) {
scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
}
for (int j = 0; j < n - 1; j++) {
for (int i = j + 1; i < n; i++) {
if (a[i][2] < a[j][2]) {
int temp0 = a[i][0];
int temp1 = a[i][1];
int temp2 = a[i][2];
a[i][0] = a[j][0];
a[i][1] = a[j][1];
a[i][2] = a[j][2];
a[j][0] = temp0;
a[j][1] = temp1;
a[j][2] = temp2;
}
if (a[i][2] == a[j][2]) {
if (a[i][1] < a[j][1]) {
int temp0 = a[i][0];
int temp1 = a[i][1];
int temp2 = a[i][2];
a[i][0] = a[j][0];
a[i][1] = a[j][1];
a[i][2] = a[j][2];
a[j][0] = temp0;
a[j][1] = temp1;
a[j][2] = temp2;
}
if (a[i][1] == a[j][1]) {
if (a[i][0] < a[j][0]) {
int temp0 = a[i][0];
int temp1 = a[i][1];
int temp2 = a[i][2];
a[i][0] = a[j][0];
a[i][1] = a[j][1];
a[i][2] = a[j][2];
a[j][0] = temp0;
a[j][1] = temp1;
a[j][2] = temp2;
}
}
}
}
}
for (int i = 0; i < n; i++) {
printf("%d %d %d\n", a[i][0], a[i][1], a[i][2]);
}
return 0;
}
