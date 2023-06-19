def rotate(nums, k):
    n = len(nums)
    k %= n  # Handle cases where k is greater than the array length
    
    # Reverse the entire array
    reverse(nums, 0, n - 1)
    
    # Reverse the first k elements
    reverse(nums, 0, k - 1)
    
    # Reverse the remaining elements
    reverse(nums, k, n - 1)

def reverse(nums, start, end):
    while start < end:
        nums[start], nums[end] = nums[end], nums[start]
        start += 1
        end -= 1

# Read input
N, K = map(int, input().split())
nums = list(map(int, input().split()))

# Rotate the array
rotate(nums, K)

# Print the rotated array
print(*nums)
