#include<bits/stdc++.h>
using namespace  std;
void reverse(int i, int j, vector<int>&nums){
    if (i > j) return;
    else {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++, j--;
    }
    reverse(i, j, nums);
}
vector<int> reverseArray(int n, vector<int> &nums)
{
    reverse(0, n-1, nums);
    return nums;
}
