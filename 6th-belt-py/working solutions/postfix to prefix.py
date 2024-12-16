s = input()
stack = []
operators = ["+","-","/","*"]
for i in s.split():
    if i in operators:
        op2 = stack.pop(len(stack)-1)
        op1 = stack.pop(len(stack)-1)
        prefix = i+" "+op1+" "+op2
        stack.append(prefix)
    else:
        stack.append(i)
        

print(stack[0])