class Node:
    def __init__(self, data=0, next=None):
        self.data = data
        self.next = next

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
        print(current.data, end=" -> ")
        current = current.next
    print("nullptr")
    
def remove_node(head,n):
    fast = slow = head
    for i in range(n):
        fast = fast.next
    if not fast:
        return head.next
    while fast.next:
        fast = fast.next
        slow = slow.next
    slow.next = slow.next.next
    return head
    
k = int(input())
input_list = list(map(int,input().split()))
n = int(input())
head = create_linked_list(input_list)
new_list = remove_node(head,n)
print_linked_list(new_list)
    
    
    
    
    
    
    
    
    
    
    