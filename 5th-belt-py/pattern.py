# Input
n = int(input())
arr = list(map(int, input().split()))

for start in range(n):
    subarray = []
    for end in range(start, n):
        subarray.append(arr[end]) 
        print(" ".join(map(str, subarray)))