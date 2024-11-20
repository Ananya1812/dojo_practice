# return the middle node hard code
class Node:
    def __init__(self, data):  
        self.data = data
        self.next = None

def create_linked_list(lst):
    head = Node(lst[0])
    current = head
    for value in lst[1:]:
        current.next = Node(value)
        current = current.next
    return head

def find_middle_node(head):
    slow = head
    fast = head
    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next
    return slow

def print_linked_list(head):
    current = head
    while current:
        print(current.data, end="")
        current = current.next
    print()

n = int(input())  # Size of the linked list
elements = list(map(int, input().split()))  # Elements of the linked list
head = create_linked_list(elements)
middle = find_middle_node(head)
if middle:
    print(f"Middle Node: {middle.data}")
