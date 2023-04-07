#include <stdio.h> 
#include <string.h> 
#include <math.h> 
#include <stdlib.h> 
  
int main()  
{ 
    int maxp, rpow,n,i; 
    scanf("%d",&maxp); 
    scanf("%d",&n); 
    int a[n]; 
    for(i=0;i<n;i++){ 
        scanf("%d",&a[i]); 
        if(a[i]>=maxp){ printf("-1");return 0; } 
    } 
    int days=0; 
    for(i=0;i<n;){ 
        days++; 
        rpow=maxp; 
        while(i<n && rpow>a[i]){rpow=rpow-a[i];i++; } 
    } 
    printf("%d",days); 
    return 0; 
} 
