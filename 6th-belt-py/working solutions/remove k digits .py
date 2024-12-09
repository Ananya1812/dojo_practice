def max_operations(nums, k):
    freq = {}
    count = 0

    for num in nums:
        complement = k - num
        if freq.get(complement, 0) > 0:
            freq[complement] -= 1
            count += 1
        else:
            freq[num] = freq.get(num, 0) + 1

    return count

n, k = map(int, input().split())
nums = list(map(int, input().split()))
print(max_operations(nums, k))