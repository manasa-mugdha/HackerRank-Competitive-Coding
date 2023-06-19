'''
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

Input Format
Given an Integer N denoting the size of integer Arrays.
The Next line contains N integers representing the elements of the Arrays.

Constraints
1 <= digits.length <= 100
0 <= digits[i] <= 9
digits does not contain any leading 0's.

Output Format
Print the array of integers representing the incremented large integer

Sample Input 0
1
1

Sample Output 0
2

Sample Input 1
2
3 9

Sample Output 1
4 0

'''

#code

def plusOne(digits):
    carry = 1  
    for i in range(len(digits)-1, -1, -1):
        digits[i] += carry  
        carry = digits[i] // 10  

        if carry == 0:  
            break

        digits[i] %= 10  

    if carry == 1:  
        digits.insert(0, 1)  

    return digits

N = int(raw_input())
digits = map(int, raw_input().split())
result = plusOne(digits)
print ' '.join(map(str, result))

