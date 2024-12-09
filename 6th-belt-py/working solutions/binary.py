def max_consecutive_ones(nums, k):
    left = 0
    max_ones = 0
    zero_count = 0

    for right in range(len(nums)):
        if nums[right] == 0:
            zero_count += 1

        while zero_count > k:
            if nums[left] == 0:
                zero_count -= 1
            left += 1

        max_ones = max(max_ones, right - left + 1)

    return max_ones

x = int(input())
nums = list(map(int, input().split()))
k = int(input())

result = max_consecutive_ones(nums, k)
print(result)