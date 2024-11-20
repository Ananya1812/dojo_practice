# return the middle node easy code

class Node:
    def __init__(self, data):  
        self.data = data
        self.next = None

def create_linked_list(lst,size):
    if len(lst) == 0:
        return None
    head = Node(lst[size//2])
    return head
    

def print_linked_list(lst):
    current = head
    while current:
        print(current.data,end= " ")
        current = current.next
    print()

size = int(input())
input = list(map(int,input().split()))
head = create_linked_list(input,size)
print_linked_list(head)
