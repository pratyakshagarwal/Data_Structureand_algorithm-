// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node (int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }

    public:
    Node (int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node* convertArr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        temp->prev = mover;
        mover = temp;
    }
    return head;
}

Node * insertAtTail(Node *head, int k) {
    Node* tail = new Node(k);
    Node* temp = head;
    if (head==nullptr){
        return tail;
    }
    while (temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next = tail;
    tail->prev = temp;
    
    return head;
}

Node *deleteLastNode(Node *head) {
    if(head->next==nullptr) return nullptr;
    Node* temp = head;
    while (temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp = nullptr;
    
    return head;
}

Node* reverseDLL(Node* head)
{   
    if (head->next==nullptr || head==nullptr){
        return head;
    }

    Node* last = nullptr;
    Node* current = head;
    while (current!=nullptr)
    {
        last = current->prev;
        current->prev = current->next;
        current->next = last;

        current = current->prev;
    }
    
    last = last->prev;
    return last;
}

void printLL(Node* head){
    while (head->next!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    
}



int main(){
    vector<int> arr = {1, 2, 3, 4};
    Node* head = convertArr2DLL(arr);
    Node* head2 = reverseDLL(head);
    printLL(head2);
    
    
    return 0;
}