#python3

def fibonacci(n):
    if n <= 1:
        return n
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

# Read input
n = int(input())

# Calculate the Fibonacci number
result = fibonacci(n)

# Print the result
print(result)
