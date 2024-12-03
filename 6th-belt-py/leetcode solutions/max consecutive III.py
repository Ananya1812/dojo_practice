# https://leetcode.com/problems/max-consecutive-ones-iii/description/
from typing import List

class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        left = 0
        max_length = 0
        zero_count = 0
        
        for right in range(len(nums)):
            if nums[right] == 0:
                zero_count += 1
            
            while zero_count > k:
                if nums[left] == 0:
                    zero_count -= 1
                left += 1
            
            max_length = max(max_length, right - left + 1)
        
        return max_length

nums = list(map(int, input().split()))
k = int(input())
solution = Solution()
print(solution.longestOnes(nums, k))