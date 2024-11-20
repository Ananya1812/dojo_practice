#take an dinput and check if the given list is a palindrome list or not 
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
    while current :
        print(current.data,end=" ")
        current = current.next
    print()


def reverse(head):
    prev = None
    current = head
    while current :
        next_node = current.next
        current.next = prev
        prev = current
        current = next_node
    return prev

def palindrome_check(head):
    if not head and head.next:
        return None
    slow = head
    fast = head
    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next

    second_half = reverse(slow)
    first_half = head
    while second_half:
        if first_half.data != second_half.data:
            return False
        first_half = first_half.next
        second_half = second_half.next
    return True


n = int(input())
input = list(map(int,input().split()))
head = create_linked_list(input)
if palindrome_check(head):
    print("Yes")
else:
    print("No")
