/* Problem statement

Given a string s, find the length of the longest substring without repeating characters.

Input Format:
The First line will have a integer N denoting the length of string.
The Second line will have a string S.

Constraints:
0 <= s.length <= 5 * 10^4
s consists of English letters, digits, symbols and spaces.

Output Format:
Print the integer which is the answer to the question

Sample Input 0:
18
fgsurhydrjkxjlvhvo

Sample Output 0:
8
Sample Input 1:
9
mjjlclldn

Sample Output 1:
3
/*



#include <iostream>
using namespace std;

int longestSubstringLength(string s) 
{
    int n = s.length();
    int maxlength = 0;
    int left=0;
    int right=0;
    bool charexists[256]={false}; 
    while (right < n) 
    {
        char currentchar=s[right];
        if(!charexists[currentchar]) 
        {
            charexists[currentchar]=true;
            int currentlength=right-left+1;
            maxlength=max(maxlength, currentlength);
            right++;
        } 
        else 
        {
            char leftchar=s[left];
            charexists[leftchar]=false;
            left++;
        }
    }
    return maxlength;
}

int main() 
{
    int n;
    cin>>n;
    string s;
    cin.ignore();
    getline(cin, s);
    int length = longestSubstringLength(s);
    cout<<length<<endl;
    return 0;
}
