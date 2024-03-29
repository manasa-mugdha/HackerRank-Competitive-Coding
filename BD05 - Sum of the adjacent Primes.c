#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime (int n)
     {
         if(n==2 || n==3) return 1;
         if(n%2==0 || n%3 == 0) return 0;
         for(int i=5;i<=sqrt(n);i+=6)
         {
             if(n%i==0 || n%(i+2)==0) return 0;
         }
             
         return 1;
     }
int main() {
    int n; scanf("%d",&n);
    int sum=2,count=0,i;
    for(i=3;sum<=n;i=i+2){
        if(isPrime(i)){
        sum +=i;
        if (sum<=n && isPrime(sum)) count++;
        }
    }
    printf("%d",count);
    return 0;
}
