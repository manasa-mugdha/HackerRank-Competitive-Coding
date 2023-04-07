#include <stdio.h>
void dBinary(int num){
if (num > 1) {
dBinary(num / 2);}
printf("%d", num % 2);
}
int main() {
int n;
scanf("%d", &n);
dBinary(n);
return 0;
}
