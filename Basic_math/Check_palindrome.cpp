#include<bits/stdc++.h>
bool palindrome(int n)
{
    if (n==0){
        return true;
    }
    long reversed = 0;
    int originalno = n;
    while (n != 0){
        int lastdigit = n%10;
        reversed = reversed*10 + lastdigit;
        n = n/10;
    }

    if (reversed == originalno){
        return 1;
    }
    else {
        return 0;
    }
}