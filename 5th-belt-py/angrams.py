str1, str2 = input().split() 

count1 = {}
for char in str1:
    if char in count1:
        count1[char] += 1
    else:
        count1[char] = 1

count2 = {}
for char in str2:
    if char in count2:
        count2[char] += 1
    else:
        count2[char] = 1

if count1 == count2:
    print("Anagrams")
else:
    print("Not Anagrams")