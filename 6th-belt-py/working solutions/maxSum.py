def maxSum(n,index,max_sum):
    def is_valid(value):
        left_elements = index
        if value > left_elements:
            left_sum = (value - left_elements + value -1) * left_elements // 2
        else:
            left_sum = value * (value-1) // 2 + (left_elements -value +1)
            
        right_elements = n- index-1
        if value > right_elements:
            right_sum = (value - right_elements + value - 1) * right_elements//2
        else:
            right_sum = value *(value-1) // 2 +(right_elements - value-1)
            
        total_sum = right_sum+left_sum+value
        return total_sum<=max_sum
        
    low = -1
    high = max_sum
    answer = 0
    while low<= high:
        mid = (low+high)//2
        if is_valid(mid):
            answer = mid
            low = mid+1
        else:
            high = mid -1 
    return answer
    
n,index,max_sum = map(int,input().split())        
print(maxSum(n,index,max_sum))
        
    