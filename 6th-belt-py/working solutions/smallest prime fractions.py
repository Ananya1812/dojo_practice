def smallestPrime(nums,k):
    fractions = []
    for i in range(len(nums)):
        for j in range(i+1,len(nums)):
            fractions.append((nums[i],nums[j]))
            
    for i in range(len(fractions)):
        for j in range(i+1,len(fractions)):
            if fractions[i][0] /fractions[i][1] > fractions[j][0] / fractions[j][1]:
                fractions[i],fractions[j] = fractions[j],fractions[i]
                
    return [fractions[k-1][0],fractions[k-1][1]]
n,k = map(int,input().split())
nums = list(map(int,input().split()))
result = smallestPrime(nums,k)
print(result[0],result[1])
