def successful_pairs(spells,portions,success):
    result = []
    for s in spells:
        count = 0
        for p in portions:
            if s*p >= success:
                count += 1
        result.append(count)
    return result

n,m = map(int,input().split())
spells = list(map(int,input().split()))
portions = list(map(int,input().split()))
success = int(input())
result = successful_pairs(spells,portions,success)
for i in result:
    print(i,end = " ")
    