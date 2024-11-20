class Node:
    def __init__(self, data):  
        self.data = data
        self.next = None
    
def create_linked_list(lst):
  if not lst :
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
    current= current.next
  print()
  
def sorted_list(head):
  if not head and not head.next:
    return head
  swapped = True
  while swapped:
    swapped = False
    current = head
    while current and current.next:
      if current.data >current.next.data:
        current.data,current.next.data = current.next.data,current.data
        swapped = True
      current = current.next
  return head
  
  
n = int(input())
input = list(map(int,input().split()))
head = create_linked_list(input)
sorted_head = sorted_list(head)
print_linked_list(sorted_head)
  
  
  
  