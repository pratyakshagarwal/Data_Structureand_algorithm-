#include<bits/stdc++.h>
using namespace std;
void printans(int i, int x,vector<int>&ans){
    if (i>x){
        return;
    }
    printans(i+1,x,ans);
    ans.push_back(i);
}

vector<int> printNos(int x){
    vector<int> ans;
    printans(1, x, ans);
    return ans;
}