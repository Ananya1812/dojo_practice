def checkInclusion(s1, s2):
    if len(s1) > len(s2):
        return False

    s1_count = {}
    for char in s1:
        if char in s1_count:
            s1_count[char] += 1
        else:
            s1_count[char] = 1

    window_count = {}
    for i in range(len(s1)):
        char = s2[i]
        if char in window_count:
            window_count[char] += 1
        else:
            window_count[char] = 1

    if s1_count == window_count:
        return True

    for i in range(len(s1), len(s2)):
        left_char = s2[i - len(s1)]
        right_char = s2[i]

        if right_char in window_count:
            window_count[right_char] += 1
        else:
            window_count[right_char] = 1

        window_count[left_char] -= 1
        if window_count[left_char] == 0:
            del window_count[left_char]

        if s1_count == window_count:
            return ("true")

    return ("false")

s1 = input()
s2 = input()
print(checkInclusion(s1, s2))
