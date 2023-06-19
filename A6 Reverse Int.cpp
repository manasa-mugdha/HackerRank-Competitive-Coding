#include <iostream>
using namespace std;

int reverse(int x) 
{
    int reversed=0;
    int maxInt= 2147483647;   
    int minInt= -2147483648;  

    while(x!= 0) 
    {
        int digit=x%10;
        if (reversed>maxInt/10 || (reversed==maxInt/10&&digit>7)) 
        {
            return 0; 
        }
        if(reversed<minInt/10||(reversed==minInt/10&&digit< -8)) 
        {
            return 0; 
        }
        reversed=reversed*10+digit;
        x/=10;
    }
    return reversed;
}

int main() 
{
    int x;
    cin>>x;
    int result=reverse(x);
    cout<<result<<endl;
    return 0;
}
