'''
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol -> Value
I -> 1
V -> 5
X -> 10
L -> 50
C -> 100
D -> 500
M -> 1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

Input Format
Given a single string

Constraints
1 <= s.length <= 15
s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
It is guaranteed that s is a valid roman numeral in the range [1, 3999].

Output Format
Print an Integer

Sample Input 0
X

Sample Output 0
10

Sample Input 1
III

Sample Output 1
3

'''

# code

def romanToInt(s):
    symbols = {
        'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000
    }
    result = 0

    for i in range(len(s)):
        # Get the value of the current symbol
        current_value = symbols[s[i]]
        if i < len(s) - 1 and symbols[s[i + 1]] > current_value:
            result -= current_value
        else:
            result += current_value

    return result

s = raw_input().strip()
integer = romanToInt(s)
print integer
