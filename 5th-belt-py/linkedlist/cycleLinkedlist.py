class Node:
    def _init_(self, data):
        self.data = data
        self.next = None

def isCycle(head, n, p):
    if not head:
        return False
    if p != -1:
        temp = head
        loop_node = None
        for i in range(n):
            if i == p - 1:
                loop_node = temp
            if temp.next:
                temp = temp.next
        temp.next = loop_node
    slow = head
    fast = head
    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next
        if slow == fast:
            return True
    return False

def createList(arr):
    head = Node(arr[0])
    temp = head
    for i in range(1, len(arr)):
        temp.next = Node(arr[i])
        temp = temp.next
    return head

n = int(input())
arr = list(map(int, input().split()))
p = int(input())

head = createList(arr)
result = isCycle(head, n, p)
print(result)