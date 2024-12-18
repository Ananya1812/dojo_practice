def koko_banana(piles,h):
    def can_eat_in_time(k):
        hours = 0
        for i in piles:
            hours += (i+k-1)//k 
        return hours<=h
        
    high = piles[0]
    for i in piles:
        if i > high:
            high = i 
    low = 1
    while low< high:
        mid = (low+high)//2
        if can_eat_in_time(mid):
            high = mid
        else:
            low = mid + 1
    return low
    
n = int(input())
piles = list(map(int,input().split()))
h = int(input())
print(koko_banana(piles,h))