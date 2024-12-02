str1 = input()
arr = []
operators = ["+","-","*","/"]

for i in str1.split():
    if i in operators:
        op2 = arr.pop()
        op1 = arr.pop()
        infix = f"({op1}{i}{op2})"
        arr.append(infix)
    else:
        arr.append(i)
print(arr[-1])

