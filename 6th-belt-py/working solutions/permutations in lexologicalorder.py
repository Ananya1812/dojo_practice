def permute(nums):
    def generate_permutations(nums, start):
        if start == len(nums) - 1:
            result.append(nums[:])
            return
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]
            generate_permutations(nums, start + 1)
            nums[start], nums[i] = nums[i], nums[start]
    
    result = []
    generate_permutations(nums, 0)
    return result

n = int(input())
nums = list(map(int, input().split()))
result = permute(nums)
for perm in result:
    print(" ".join(map(str, perm)))
