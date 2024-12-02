# https://leetcode.com/problems/asteroid-collision/description/

def asteroid_collision(asteroids):
    stack = []
    
    for asteroid in asteroids:
        while stack and asteroid < 0 and stack[-1] > 0:
            if stack[-1] < abs(asteroid):
                stack.pop()
                continue
            elif stack[-1] == abs(asteroid):
                stack.pop()
            break
        else:
            stack.append(asteroid)
    
    return stack

asteroids = list(map(int, input().strip().split()))
print(asteroid_collision(asteroids))
