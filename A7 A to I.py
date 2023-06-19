'''
Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).

The algorithm for myAtoi(string s) is as follows:

Read in and ignore any leading whitespace. Check if the next character (if not already at the end of the string) is '-' or '+'. Read this character in if it is either. This determines if the final result is negative or positive respectively. Assume the result is positive if neither is present. Read in next the characters until the next non-digit character or the end of the input is reached. The rest of the string is ignored. Convert these digits into an integer (i.e. "123" -> 123, "0032" -> 32). If no digits were read, then the integer is 0. Change the sign as necessary (from step 2). If the integer is out of the 32-bit signed integer range [-2^31, 2^31 - 1], then clamp the integer so that it remains in the range. Specifically, integers less than -2^31 should be clamped to -2^31, and integers greater than 2^31 - 1 should be clamped to 2^31 - 1. Return the integer as the final result.

Input Format

Contains a string.

Constraints

0 <= s.length <= 200

Output Format

Return the integer as a final result

Sample Input 0

     23465 dskfhg helo
Sample Output 0

23465
Sample Input 1

   -923746 shdfhdsf dfuhkljfhldkjsf hldjkfhsdljkhf sdkfghsfd sdf sdljfhsdf
Sample Output 1

-923746 '''



def myAtoi(s: str)->int:
    s = s.strip()  # Remove leading and trailing whitespace
    if not s:
        return 0  # Empty string case

    sign = 1
    if s[0] == '-' or s[0] == '+':
        sign = -1 if s[0] == '-' else 1
        s = s[1:]  # Remove sign character

    num = 0
    for char in s:
        if not char.isdigit():
            break  # Stop processing at the first non-digit character
        num = num * 10 + int(char)

    num = sign * num
    num = max(-2**31, min(num, 2**31 - 1))  # Clamp the integer within the 32-bit range

    return num

def main():
    s = input()
    result = myAtoi(s)
    print(result)
if __name__ == "__main__":
    main()
