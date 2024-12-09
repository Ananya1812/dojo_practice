def kthSmallestPrimeFraction(arr, k):
    fractions = []
    for i in range(len(arr)):
        for j in range(i + 1, len(arr)):
            fractions.append((arr[i], arr[j]))
    
    for i in range(len(fractions)):
        for j in range(i + 1, len(fractions)):
            if fractions[i][0] / fractions[i][1] > fractions[j][0] / fractions[j][1]:
                fractions[i], fractions[j] = fractions[j], fractions[i]
    
    return [fractions[k - 1][0], fractions[k - 1][1]]

n, k = map(int, input().split())
arr = list(map(int, input().split()))
result = kthSmallestPrimeFraction(arr, k)
print(result[0], result[1])
