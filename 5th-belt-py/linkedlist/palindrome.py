class Node:
    def __init__(self, data):  
        self.data = data
        self.next = None
        
def create_linked_list(list):
    if not list:
        return None
    head = Node(list[0])
    current = head
    for data in list[1:]:
        current.next = Node(data)
        current = current.next
    return head

def reverse(head):
    prev = None
    current = head
    while current :
        next_node = current.next
        current.next = prev
        prev = current
        current = next_node
    return prev

def compare(head1,head2):
    while head1 and head2:
        if head1.data != head2.data:
            return False
        head1 = head1.next
        head2 = head2.next
    return head1 is None and head2 is None
    
n= int(input())
input_list = list(map(int,input().split()))
head = create_linked_list(input_list)
r = reverse(create_linked_list(input_list))
if compare(head,r):
    print("Yes")
else:
    print("No")
        

            