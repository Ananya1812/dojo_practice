def count_subarrays_with_max_atmost_x(nums, x):
    count = 0
    length = 0

    for num in nums:
        if num <= x:
            length += 1
            count += length
        else:
            length = 0
    return count

def numSubarrayBoundedMax(nums, left, right):
    return count_subarrays_with_max_atmost_x(nums, right) - count_subarrays_with_max_atmost_x(nums, left - 1)

n = int(input()) 
left, right = map(int, input().split()) 
nums = list(map(int, input().split())) 
print(numSubarrayBoundedMax(nums, left, right))
