# https://leetcode.com/problems/next-greater-element-i/
def nextGreaterElement(nums1, nums2):
    next_greater = {}
    stack = []
    
    for num in nums2:
        while stack and num > stack[-1]:
            next_greater[stack.pop()] = num
        stack.append(num)
    
    while stack:
        next_greater[stack.pop()] = -1
    
    result = []
    for num in nums1:
        result.append(next_greater.get(num, -1))
    return result

nums1 = list(map(int, input().split()))
nums2 = list(map(int, input().split()))
print(nextGreaterElement(nums1, nums2))
