def twoSum(nums, target):
    # Create a dictionary to store the complement of each number and its index
    complements = {}
    
    for i, num in enumerate(nums):
        complement = target - num
        
        # Check if the complement exists in the dictionary
        if complement in complements:
            # Return the indices of the two numbers
            return [complements[complement], i]
        
        # Store the current number and its index in the dictionary
        complements[num] = i
    
    # No solution found
    return []

# Read input values
n = int(input())
nums = list(map(int, input().split()))
target = int(input())

# Find the indices of the two numbers
result = twoSum(nums, target)

# Print the indices
print(result[0], result[1])
