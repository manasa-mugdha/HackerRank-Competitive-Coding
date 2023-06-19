#python2



def majorityElement(nums):
    count = 0
    candidate = None
    for num in nums:
        if count == 0:
            candidate = num
        if num == candidate:
            count += 1
        else:
            count -= 1
    count = 0
    for num in nums:
        if num == candidate:
            count += 1
    
    if count > len(nums) // 2:
        return candidate
    else:
        return -1  
    
N = int(raw_input())
nums = map(int, raw_input().split())
result = majorityElement(nums)
print result
