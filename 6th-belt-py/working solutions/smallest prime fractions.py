def kthsmallestPrime(nums,k):
    fraction = []
    for i in range(len(nums)):
        for j in range(i+ 1,len(nums)):
            fraction.append((nums[i],nums[j]))
            
    for i in range(len(fraction)):
        for j in range(i+1,len(fraction)):
            if fraction[i][0]/fraction[i][1] > fraction[j][0]/fraction[j][1]:
                fraction[i],fraction[j] = fraction[j],fraction[i]
                
    return [fraction[k-1][0],fraction[k-1][1]]

n,k = map(int,input().split())
nums = list(map(int,input().split()))
result = kthsmallestPrime(nums,k)
print(result[0],result[1])
