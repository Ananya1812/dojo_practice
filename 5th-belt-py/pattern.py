n = int(input())
arr = list(map(int,input().split()))
for i in range (n):
    subarray = []
    for j in range(i,n):
        subarray.append(arr[j])
        print(" ".join(map(str,subarray)))