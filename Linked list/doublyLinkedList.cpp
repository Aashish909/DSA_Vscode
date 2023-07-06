#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for the node with value" << value << " & data   " << data << endl;
    }
};
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        cout << temp->data;
        temp = temp->next;
    }
    return len;
}
void insertAtHead(Node *&head, int data)
{
    // agar empty list ho to
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp; // head ko sahi position me lao
    }
}
void insertAtTail(Node *tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
    }
    else
    {
        // create node
        Node *temp = new Node(data);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{

    // insert at first node
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    // inserting at middle position

    Node *insertToNode = new Node(data);

    insertToNode->next = temp->next;
    temp->next->prev = insertToNode;
    insertToNode->prev = temp;
    temp->next = insertToNode;
}

void deleteNode(int position, Node *head)
{

    // deleting first node
    if (position == 1)
    {
        Node *temp = head;

        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle or last node
        Node *curr = head;
        Node *prev = NULL;

        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}
int main()
{

    // Node *node1 = new Node(10);

    // Node *head = node1;
    // Node *tail = node1;

    // agar empty list
    Node *head = NULL;
    Node *tail = NULL;

    print(head);
    // cout<<getLength(head)<<endl;

    insertAtHead(head, 11);
    print(head);

    insertAtHead(head, 13);
    print(head);

    insertAtHead(head, 8);
    print(head);

    insertAtTail(tail, 25);
    print(head);

    insertAtPosition(head, tail, 2, 100);
    print(head);

    insertAtPosition(head, tail, 1, 999);
    print(head);
    

    deleteNode(5,head);
    print(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    //tail ke pointer ko handle krna hoga bas
}