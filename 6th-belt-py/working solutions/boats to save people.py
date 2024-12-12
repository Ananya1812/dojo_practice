def rescue(people,limit):
    def sort(people):
        n = len(people)
        for i in range(n):
            for j in range(n-i-1):
                if people[j] > people[j+1]:
                    people[j],people[j+1] = people[j+1],people[j]
                    
    sort(people)
    left = 0
    right = len(people) - 1 
    boats = 0
    while left<= right:
        if people[left] + people[right] <= limit:
            left += 1 
        right -= 1 
        boats += 1 
    return boats    
    
n,limit = map(int,input().split())
people = list(map(int,input().split())) 
print(rescue(people,limit))
