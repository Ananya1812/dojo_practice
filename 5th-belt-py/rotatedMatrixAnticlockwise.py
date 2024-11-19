#for input in 2 separate lines
rows = int(input())
cols = int(input())

#for input in 1 line
rows,cols = map(int,input().split())

matrix = []
for i in range(rows):
    r = list(map(int, input().split()))
    matrix.append(r)

transpose = [[matrix[i][j] for i in range(rows)] for j in range(cols)]


rotated = transpose[::-1]

for i in rotated:
    print(" ".join(map(str, i)))
