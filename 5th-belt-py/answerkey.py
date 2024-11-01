answerKey = input("")
k = int(input(""))
max_length = 0
left = 0
count = 0
for right in range(len(answerKey)):
    if answerKey[right] != 'T':
        count += 1
    while count > k:
        if answerKey[left] != 'T':
            count -= 1
        left += 1
    max_length = max(max_length, right - left + 1)
left = 0
count = 0

for right in range(len(answerKey)):
    if answerKey[right] != 'F':
        count += 1
    while count > k:
        if answerKey[left] != 'F':
            count -= 1
        left += 1
    max_length = max(max_length, right - left + 1)
print(max_length)