class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

# Function to create a doubly linked list from an array
def create_doubly_linked_list(arr):
    if not arr:
        return None
    head = Node(arr[0])
    curr = head
    for data in arr[1:]:
        new_node = Node(data)
        curr.next = new_node
        new_node.prev = curr
        curr = new_node
    return head

# Function to print a doubly linked list
def print_doubly_linked_list(head):
    curr = head
    while curr:
        print(curr.data, end=" ")
        curr = curr.next
    print()

# Bubble Sort for Doubly Linked List
def bubble_sort(head):
    if not head or not head.next:
        return head
    
    swapped = True
    while swapped:
        swapped = False
        current = head
        while current and current.next:
            if current.data > current.next.data:
                current.data, current.next.data = current.next.data, current.data
                swapped = True
            current = current.next
    return head

n = int(input())  
input_list = list(map(int, input().split()))  
head = create_doubly_linked_list(input_list)
head = bubble_sort(head)
print_doubly_linked_list(head)
