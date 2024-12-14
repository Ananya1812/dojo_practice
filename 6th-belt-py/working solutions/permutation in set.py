def factorial(num):
    result = 1 
    for i in range(1,num+1):
        result *= i 
    return result
    
def get_permutations(n,k):
    result = []
    k -= 1
    nums = list(range(1,n+1))
    for i in range(len(nums)):
        fact = factorial(n-i-1)
        index = k // fact
        result.append(str(nums.pop(index)))
        k %= 2
    return result

n,k = map(int,input().split())
result = get_permutations(n,k)
for i in result:
    print(i, end = "")