#include <bits/stdc++.h> 

// Dutch National flag algorithm 
void sortArray(vector<int>& arr, int n)
{
    int low = 0, mid = 0, high = n-1;
    while (mid<=high){
        if (arr[mid] == 0){
            swap(arr[low], arr[mid]);
            mid++, low++;
        }
        else if (arr[mid] == 1){
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

// Moore's Voting algorithm
int majorityElement(vector<int> v) {
    int cnt = 0;
    int el;
    for (int i=0; i<v.size(); i++){
        if (cnt == 0){
            cnt = 1;
            el=v[i];
        }
        else if (v[i] == el) cnt++;
        else cnt--;
    }
    int cnt2 = 0;
    for (int i=0; i<v.size(); i++){
        if (v[i] == el) cnt2++;
    }
    if (cnt2 > (v.size())/2) return el;

    return -1;
}

// Kadane's Algorihtm
long long maxSubarraySum(vector<int> arr, int n)
{
    long long current_max = 0, global_max = LONG_MIN;
    for (int i=0; i<n; i++){
        current_max+=arr[i];
        if (current_max > global_max) global_max = current_max;
        if (current_max < 0) current_max = 0;
    }

    if (global_max < 0) global_max = 0;
    return global_max;
}

//Floyd's Cycle Detection Algorithm also known as the "tortoise and hare" algorithm
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
