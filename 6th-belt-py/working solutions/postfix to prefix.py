def postfix_to_prefix(postfix):
    stack = []
    operators = {'+', '-', '*', '/'}  

    tokens = postfix.split()

    for token in tokens:
        if token not in operators:
            stack.append(token)
        else:
            operand2 = stack.pop()
            operand1 = stack.pop()
            prefix_expr = token + " " + operand1 + " " + operand2
            stack.append(prefix_expr)

    return stack[0]

postfix_expr = input().strip()
print(postfix_to_prefix(postfix_expr))