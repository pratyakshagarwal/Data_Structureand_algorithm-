#include<iostream>
#include<vector>
#include <unordered_map>
#include<map>
#include<string>
#include<cstdlib>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = nullptr;
    }
    Node(int data1)
    {
        data = data1; 
        next = nullptr;
    }
    Node(int data1, Node* next1)
    {
        data = data;
        next = next;
    }
};

Node* constructLL(const vector<int>& arr) {
    if (arr.empty()) {
        return nullptr;  // Return nullptr for an empty vector
    }
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    mover->next = nullptr;  // Set the next pointer of the last node to nullptr
    return head;
}

int lenghtofLL(Node* head){
    Node* temp = head;
    int count = 0;
    while (temp)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

Node *findMiddle(Node *head) {
    int n = lenghtofLL(head);
    Node* temp = head;
    for (int i=0; i<n/2; i++){
        temp=temp->next;
    }
    return temp;
}

Node* constructCLL(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    mover->next=head;
    return head;
}

bool detectCycle(Node *head) {
    if (head == nullptr || head->next == nullptr) {
        return false; // No cycle if there are less than two nodes
    }
    Node *slow = head;
    Node *fast = head->next;

    while (fast != nullptr && fast->next != nullptr) {
        if (slow == fast) {
            return true; // Cycle detected
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return false; // No cycle found
}

void printLL(Node* head){
    while (head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* reverseLinkedList(Node *head)
{
    if (head == nullptr || head->next == nullptr) return head;

    Node* current = head;
    Node* lastnode = nullptr;
    while (current)
    {
        Node* nextnode = current->next;
        current->next = lastnode;
        lastnode = current;
        current = nextnode;
    }
    return lastnode;
}

Node *firstNode(Node *head)
{
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    unordered_map<int, int> cnt;
    Node* temp = head;
    while (temp)
    {
        cnt[temp->data]++;
        if (cnt[temp->data] == 2) break;
        temp=temp->next;

    }
    return temp;
}

bool isPalindrome(Node *head)
{
    if (head == nullptr || head->next == nullptr) return true;
    int lenght = lenghtofLL(head);
    Node* temp = head;
    for (int i=0; i<lenght/2;i++){
        temp=temp->next;
    }
    if (lenght%2 == 1) temp=temp->next;
    Node* mid = reverseLinkedList(temp);
    bool flag = true;
    for (int i=0; i<lenght/2; i++){
        if (head->data != mid->data) {
            flag = false;
            break;
        } 
        head =  head->next;
        mid = mid->next;
    }
    return flag;
}

Node* removeKthNode(Node* head)
{

    if (head->next == nullptr || head==nullptr) return nullptr;
    int length = lenghtofLL(head);
    int K = length/2;
    if (K == 0){
        Node* todelete = head;
        head=head->next;
        delete todelete;
        return head;
    }
    Node* temp = head;
    for (int i=0; i<K-1; i++){
        temp=temp->next;
    }
    Node* currentnode = temp->next;
    Node* nextnode = currentnode->next;
    temp->next = nextnode;
    if (currentnode == head) head=head->next;

    delete currentnode;

    return head;
}

Node* deleteMiddle(Node* head){
    if (head->next == nullptr || head==nullptr) return nullptr;
    int length = lenghtofLL(head);
    int K = length/2;
    if (K == 0){
        Node* todelete = head;
        head=head->next;
        delete todelete;
        return head;
    }
    Node* temp = head;
    for (int i=0; i<K-1; i++){
        temp=temp->next;
    }
    Node* currentnode = temp->next;
    Node* nextnode = currentnode->next;
    temp->next = nextnode;
    if (currentnode == head) head=head->next;

    delete currentnode;

    return head;
}

Node* sortList(Node* head){
    
}

int lengthOfLoop(Node *head) {
    map<Node*, int> mymap;
    Node* temp = head;
    int  timer = 0;
    while (temp!=nullptr){
        timer++;
        if (mymap.find(temp) != mymap.end()) return timer-mymap[temp];
        else {
            mymap[temp] = timer;
        }
    }
}


Node *addTwoNumbers(Node *num1, Node *num2)
{
    // if (num1 == nullptr) return num2;
    // if (num2 == nullptr) return num1;

    // int lenght1 = lenghtofLL(num1);
    // int lenght2 = lenghtofLL(num2);
    // int k = num1->data+num2->data;
    // Node* head = new Node(k);

    // for (int i=0; i<max(lenght1, lenght2); i++)
    // {
    //     k = 
    // }
}


int main() {
    vector<int> arr = {18, 22};
    Node* head = constructLL(arr);
    Node* head2 = removeKthNode(head);
    printLL(head2);

    return 0;
}