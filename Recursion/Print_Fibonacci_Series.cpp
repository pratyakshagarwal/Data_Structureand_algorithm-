#include<bits/stdc++.h>
using namespace std;
void fib(int first, int second, int count, vector<int>&result){
    if (count == 0) return;

    result.push_back(first);
    int temp = first + second;
    first = second;
    second = temp;
    count --;
    fib(first, second, count, result);
}

vector<int> generateFibonacciNumbers(int n) {
    vector<int> result;
    fib(0, 1, n, result);
    return result;
}