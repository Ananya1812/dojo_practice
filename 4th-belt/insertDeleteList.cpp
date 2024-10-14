#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtBeginning(Node *&head, int newData)
{
    Node *newNode = new Node(newData);
    newNode->next = head;
    head = newNode;
}

void deleteAtBeginning(Node *&head)
{
    if (head == nullptr)
    {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}
void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = nullptr;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        insertAtBeginning(head, value);
    }

    deleteAtBeginning(head);

    printList(head);

    return 0;
}