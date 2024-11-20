class Node:
    def __init__(self, data):  
        self.data = data
        self.next = None
    
def create_linked_list(lst):
    if not lst:
        return None
    head = Node(lst[0])
    current = head
    for data in lst[1:]:
        current.next = Node(data)
        current = current.next
    return head

def print_linked_list(head):
    current = head
    while current:
        print(current.data, end=" ")
        current = current.next
    print()

def linked_list_to_array(head):
    lst = []
    current = head
    while current:
        lst.append(current.data)
        current = current.next
    return lst

def find_sum_pair(head, x):
    if not head or not head.next:  
        return -1
    lst = linked_list_to_array(head)  
    lst.sort()  
    left, right = 0, len(lst) - 1  
    while left < right:
        current_sum = lst[left] + lst[right]
        if current_sum == x: 
            return lst[left], lst[right]
        elif current_sum < x:  
            left += 1
        else:  
            right -= 1
    return -1  

n, x = map(int, input().split())  
values = list(map(int, input().split()))  
head = create_linked_list(values)
result = find_sum_pair(head, x)
if result == -1:
    print(-1)
else:
    print(result[0], result[1])
