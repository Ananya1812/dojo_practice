def success_pair(spells,potions,success):
    result = []
    for s in spells:
        count = 0
        for p in potions:
            if s*p >= success:
                count += 1 
        result.append(count)
    return result
    
n,m = map(int,input().split())
spells = list(map(int,input().split()))
potions = list(map(int,input().split()))
success = int(input())
result = success_pair(spells,potions,success)
for i in result : 
    print(i,end = " ") 