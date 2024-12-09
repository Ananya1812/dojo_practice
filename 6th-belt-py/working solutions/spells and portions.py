def successful_pairs(spells, potions, success):
    result = []
    for spell in spells:
        count = 0
        for potion in potions:
            if spell * potion >= success:
                count += 1
        result.append(count)
    return result
n,m = map(int,input().split())
spells = list(map(int, input().split()))
potions = list(map(int, input().split()))
success = int(input())

pairs = successful_pairs(spells, potions, success)

print(" ".join(map(str, pairs)))

