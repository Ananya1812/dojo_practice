def is_palindrome(s):
    n = len(s)
    for i in range(n // 2):
        if s[i] != s[n - i - 1]:
            return False
    return True

def can_form_palindrome_by_rotation(s):
    n = len(s)
    
    for i in range(n):
        rotated = s[i:] + s[:i]
        
        if is_palindrome(rotated):
            return "Yes, the rotated string is a palindrome."
    
    return "No, the rotated string is not a palindrome."

# Input from the user
s = input()

# Output the result
print(can_form_palindrome_by_rotation(s))
