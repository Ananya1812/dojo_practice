def max_value(n, index, max_sum):
    def sum_up_to(x):
        return (x * (x + 1)) // 2
    
    def is_valid(value):
        left = index
        left_sum = 0
        if value > left:
            left_sum = sum_up_to(value - 1) - sum_up_to(value - left - 1)
        else:
            left_sum = sum_up_to(value - 1)
        
        right = n - index - 1
        right_sum = 0
        if value > right:
            right_sum = sum_up_to(value - 1) - sum_up_to(value - right - 1)
        else:
            right_sum = sum_up_to(value - 1)
        
        total_sum = left_sum + right_sum + value
        return total_sum <= max_sum
    
    low, high = 1, max_sum
    result = 1
    
    while low <= high:
        mid = (low + high) // 2
        if is_valid(mid):
            result = mid
            low = mid + 1
        else:
            high = mid - 1
    
    return result

n = int(input())  
index = int(input())  
max_sum = int(input())  

print(max_value(n, index, max_sum))
