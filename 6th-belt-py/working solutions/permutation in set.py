def compute_factorial(n):
    result = 1 
    for i in range(1,n+1):
        result *= i
    return result
        
def generate_permutations(n,k):
    nums = list(range(1,n+1))
    k -= 1
    result = []
    for i in range(len(nums)):
        fact = compute_factorial(n-i-1)
        index = k // fact
        result.append(str(nums.pop(index)))
        k %= 2 
    return result
    
n,k = map(int,input().split())
result = (generate_permutations(n,k))
for i in result:
    print(i,end= "")
