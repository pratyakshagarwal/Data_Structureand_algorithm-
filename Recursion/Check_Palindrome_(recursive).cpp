#include<bits/stdc++.h>
using namespace std;
int check(int i, int j, string& str){
    if (i>j) return 1;
    else {
        if (str[i] == str[j]){
            i++, j--;
        }
        else {
            return 0;
        }
    }
    check(i,j,str);

}

bool isPalindrome(string& str) {
    if (check(0, str.size()-1, str)) return true;
    else return false;
}
