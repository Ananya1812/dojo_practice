# matrix input 
rows = int(input())
cols = int(input())
matrix = []
for i in range(rows):
    r = list(map(int,input().split()))
    matrix.append(r)

transpose = [[matrix[i][j] for i in range(rows) ] for j in range(cols)]

rotated = [i[::-1] for i in transpose]

for i in rotated:
    print(" ".join(map(str,i)))




