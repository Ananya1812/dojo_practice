def permute(nums):
    def generate_permutation(nums,start):
        if start == len(nums):
            result.append(nums[:])
            return
        for i in range(start,len(nums)):
            nums[i],nums[start] = nums[start],nums[i]
            generate_permutation(nums,start+1)
            nums[i],nums[start] = nums[start],nums[i]
    result = []
    generate_permutation(nums,0)
    return result
    
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