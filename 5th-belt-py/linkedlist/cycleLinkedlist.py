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

def create_cycle(head, pos):
    if pos == -1 or not head:
        return head
    
    current = head
    cycle_node = None
    index = 0
    
    # Traverse to the position where the cycle should start
    while current and current.next:
        if index == pos:
            cycle_node = current
        current = current.next
        index += 1
    
    # If pos == 0, create cycle by linking the last node to the head
    if pos == 0:
        current.next = head
    elif cycle_node:
        current.next = cycle_node  # Create the cycle by linking the last node to cycle_node
    
    return head

def has_cycle(head):
    if not head:
        return False
    slow = head
    fast = head
    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next
        if slow == fast:
            return True  # A cycle is detected
    return False

# Input handling
n = int(input())  
if n > 0:
    arr = list(map(int, input().split()))  
    pos = int(input())  
    
    head = create_linked_list(arr)  
    head = create_cycle(head, pos)  # Create a cycle at the given position
    
    if has_cycle(head):
        print("True")
    else:
        print("False")
