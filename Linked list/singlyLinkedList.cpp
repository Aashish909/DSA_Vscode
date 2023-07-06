#include <iostream>
#include <map>
using namespace std;

class Node
{

public:
    int data = 5;
    Node *agla;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->agla = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->agla != NULL)
        {
            delete agla;
            this->agla = NULL;
        }
        cout << "Memory is free for node with data " << data << endl;
    }
};

// insertion
void insertAtheadNode(Node *&head, int data)
{

    // new node create
    Node *temp = new Node(data);
    temp->agla = head; //(agla=next)
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);

    if (tail == NULL)
    {
        tail = temp;
    }
    else
    {
        tail->agla = temp;
        tail = temp;
    }
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->agla;
    }
    cout << endl;
}
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->agla = head;
    head = temp;
}

// void print(Node *&head)
// {
//     Node *temp = head;

//     while (temp != NULL)
//     {
//          cout << temp->data << " ";
//          temp = temp->agla;
//     }
//     cout << endl;
// }

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    if (position <= 0)
    {
        cout << "invalid position" << endl;
    }
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int count = 1;

    // inserting at last position
    if (temp->agla == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    while (count < position - 1)
    {
        temp = temp->agla; // aage badhate jao
        count++;
    }

    // creating a node for data
    Node *nodeToinsert = new Node(data);

    nodeToinsert->agla = temp->agla;
    temp->agla = nodeToinsert;
    if (nodeToinsert->agla == NULL)
    {
        tail = nodeToinsert; // updating the tail pointer point to last location which is here 32
    }
}

// deleting in linked list
void deleteNode(int position, Node *&head)
{

    // deleting first node
    if (position == 1)
    {
        Node *temp = head;
        head = head->agla;
        // memory free
        temp->agla = NULL;
        delete temp;
    }
    else
    {
        // delete for middle node
        Node *current = head;
        Node *previous = NULL;

        int count = 1;
        while (count < position)
        {
            previous = current;
            current = current->agla;
            count++;
        }
        previous->agla = current->agla;
        current->agla = NULL;
        delete current;
    }
}
bool isCircular(Node *head)
{

    // empty list hai
    if (head == NULL)
    {
        return true;
    }
    //>= 1 node
    Node *temp = head->agla;
    while (temp != NULL && temp != head)
    {
        temp = temp->agla;
    }
    if (temp == head)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isLoop(Node *head)
{

    if (head == NULL)
    {
        return false;
    }

    map<Node *, bool> visited; // map ka dependency add kro#incliude<map>
    Node *temp = head;

    while (temp != NULL)
    {

        if (visited[temp] == true)
        {
            cout << "loop is present at " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->agla;
    }
    return false;
}

Node *floydDetectLoop(Node *head)
{

    if (head == NULL)
    {
        return NULL;
    }
    Node *fast = head;
    Node *slow = head;

    while (fast != NULL && slow != NULL)
    {

        fast = fast->agla;
        if (fast != NULL)
        {
            fast = fast->agla;
        }
        slow = slow->agla;
        if (fast == slow)
        { // mtlb loop hai
            cout << "loop is present at " << fast->data << endl;
            return slow;
        }
    }
    return NULL;
}
Node *getStartingLoop(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *intersection = floydDetectLoop(head);
    Node *slow = head;

    while (slow != intersection)
    {
        slow = slow->agla;
        intersection = intersection->agla;
    }
    return slow;
}
// remove loop
void removeLoop(Node *head)
{

    if (head == NULL)
    {
        return;
    }

    Node *startOfLoop = getStartingLoop(head);
    Node *temp = startOfLoop;

    while (temp->agla != startOfLoop)
    {
        temp = temp->agla;
    }

    temp->agla = NULL;
}

int main()
{
    // created a new node
    Node *node1 = new Node(10);
    // cout<<node1-> data<<endl;
    // cout<<node1->agla<<endl;

    // head pointed to node 1
    Node *head = node1;

    // tail pointed to node 1
    Node *tail = node1;

    // insertAtheadNode(head, 12);
    // print(head);
    // insertAtheadNode(head, 15);
    // print(head);

    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(head, tail, 4, 32);
    print(head);

    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    // deleteNode(1,head);
    // print(head);
    tail->agla = head->agla; // loop bana diye

    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    // print(head);

    if (floydDetectLoop(head))
    {
        cout << "loop found";
    }
    else
    {
        cout << "no loop found ";
    }
    Node *loop = getStartingLoop(head);
    cout << "loop is start at " << loop->data << endl;

    removeLoop(head);
    cout << "after removing loop " << endl;
    print(head);

    if (floydDetectLoop(head))
    {
        cout << "loop found";
    }
    else
    {
        cout << "no loop found ";
    }
    /*
    if (isCircular(head))
    {
        cout << " circular linked list hai " << endl;
    }
    else
    {
        cout << "circular linked list nahi hai" << endl;
    }
    */
}