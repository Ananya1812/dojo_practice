def maximise_greatness(nums):
    def sort(nums):
        n = len(nums)
        for i in range(n):
            for j in range(n-i-1):
                if nums[j] > nums[j+1]:
                    nums[j],nums[j+1] = nums[j+1],nums[j]
    sort(nums)
    count = 0
    j = 0
    for i in range(len(nums)):
        if nums[j] < nums[i]:
            count += 1 
            j += 1 
    return count
    
n = int(input())
nums = list(map(int,input().split()))
print(maximise_greatness(nums))
