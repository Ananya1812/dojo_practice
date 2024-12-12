def permute(nums):
    def generate_permutations(nums,start):
        if start == len(nums) -1:
            result.append(nums[:])
            return
        for i in range(start,len(nums)):
            nums[i],nums[start] = nums[start],nums[i]
            generate_permutations(nums,start+1)
            nums[i],nums[start] = nums[start],nums[i]
            
    result = []
    generate_permutations(nums,0)
    return result
    
    
def sort(a):
    n = len(a)
    for i in range(n):
        for j in range(n-1-i):
            if a[j]>a[j+1]:
                a[j],a[j+1] = a[j+1],a[j]
                

    

n = int(input())
nums = list(map(int,input().split()))
result = permute(nums)
sort(result)
for i in result:
    print(" ".join(map(str,i)))
