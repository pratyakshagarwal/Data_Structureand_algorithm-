#include<iostream>
#include<vector>
using namespace std;

int findPeakElement(vector<int> &arr) {
    int low=0, high=arr.size()-1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;
        else if (arr[low] <= arr[mid])
        {
            
        }
    }
    
}

int main(){
    vector<int> arr = {1, 2};
    cout<<findPeakElement(arr);

    return 0;
}
