s = input()
arr = []
operators = ["+","-","/","*"]
for i  in s.split():
    if i in operators:
        op2 = arr.pop()
        op1 = arr.pop()
        infix = i + " "+op1 + " "+op2
        arr.append(infix)
    else:
        arr.append(i)
        
result = arr[0]
print (result) 
        