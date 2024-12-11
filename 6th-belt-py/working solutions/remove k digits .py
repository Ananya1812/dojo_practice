def max_operations(nums, k):
    freq = {}
    count = 0

    for num in nums:
        complement = k - num
        if complement in freq and freq[complement] > 0:
            freq[complement] -= 1
            count += 1
        else:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1

    return count

n, k = map(int, input().split())
nums = list(map(int, input().split()))
print(max_operations(nums, k))
