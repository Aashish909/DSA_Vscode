#include <iostream>
#include<map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete this->next;
            next = NULL;
        }
        cout << "Memory free for node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int data)
{
    // empty list
    if (tail == NULL)
    {

        Node *temp = new Node(data);

        tail = temp;
        temp->next = temp;
    }
    else
    {
        // non empty list

        Node *curr = tail->next;
        while (curr != tail && curr->data != element)
        {
            curr = curr->next;
        }
        // element found ho gya or curr is representing elemnt node

        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;

        // update tail
        if (curr == tail)
        {
            tail = temp;
        }
    }
}

void print(Node *tail)
{
    if (tail == NULL)
    {
        cout << "list is empty, check your data" << endl;
        return;
    }
    Node *temp = tail->next; // start from the first node
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail->next);
    cout << endl;
}

void deleteNode(Node *&tail, int value)
{
    // emppty list rahi to
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        // when list is not empty
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // only 1 node present
        if (curr == prev)
        {
            tail == NULL;
        }

        // more than 2 node present
        else if (tail == curr)
        {
            tail = prev;
        }
        if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

bool isCircular(Node* head){

    //empty list hai  
    if(head == NULL){
        return true;
    }
    //>= 1 node
    Node* temp=head->next;
    while(temp != NULL && temp != head){
        temp=temp->next;
    }
    if(temp == head){
        return true;
    }
    else{
        return false;
    }
} 
bool isLoop(Node* head){

    if(head == NULL){
        return false;
    }

    map<Node*, bool>visited;      //map ka dependency add kro#incliude<map>
    Node* temp= head;

    while(temp != NULL){

        if(visited[temp] == true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}


int main()
{
    Node *tail = NULL;
    // insert in empty list
    insertNode(tail, 5, 3);
    print(tail);

/*
    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 1);
    print(tail);

    insertNode(tail, 5, 11);
    print(tail);

    insertNode(tail, 11, 64);
    print(tail);

    insertNode(tail, 1, 99);
    print(tail);
    */

    // deleteNode(tail, 3);
    // print(tail);
    if(isCircular(tail)){
        cout<<" circular linked list hai "<<endl;
    }
    else {
        cout<<"circular linked list nahi hai"<<endl;
    }
}