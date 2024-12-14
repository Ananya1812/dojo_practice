def permute(nums):
    def generate_permutations(nums,start):
        if start == len(nums)-1:
            res.append(nums[:])
            return
        for i in range(start,len(nums)):
            nums[i],nums[start] = nums[start],nums[i]
            generate_permutations(nums, start+1)
            nums[i],nums[start] = nums[start],nums[i]
            
    res = []
    generate_permutations(nums,0)
    return res 
    
def sort(nums):
    n = len(nums)
    for i in range(n):
        for j in range(n-i-1):
            if nums[j] > nums[j+1]:
                nums[j],nums[j+1] = nums[j+1],nums[j]
                


n = int(input())
nums = list(map(int,input().split()))
result = permute(nums)
sort(result)
for i in result:
    print(" ".join(map(str,i)))