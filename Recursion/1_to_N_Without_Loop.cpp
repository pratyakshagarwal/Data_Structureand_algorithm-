#include<bits/stdc++.h>
using namespace std;

void printans(int i, int x, vector<int> &ans){
    if (i>x){
        return;
    }
    ans.push_back(i);
    printans(i+1,x,ans);
}
vector<int> printNos(int x){
    vector<int> ans;
    printans(1,x,ans);

    return ans;

}