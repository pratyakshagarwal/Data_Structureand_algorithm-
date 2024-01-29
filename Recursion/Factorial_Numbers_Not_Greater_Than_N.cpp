#include<bits/stdc++.h>
using namespace std;
static long long getFactorial(long long n) {
    if (n == 1) {
        return n;
    } else {
        return n * getFactorial(n - 1);
    }
}

vector<long long> getFactorialNumbers(std::vector<long long>& result, long long n, long long count) {
    long long factorial = getFactorial(count);
    if (factorial > n) {
        return result;
    } else {
        result.push_back(factorial);
        return getFactorialNumbers(result, n, count + 1);
    }
}


vector<long long> factorialNumbers(long long n) {
    vector<long long> result;
    return getFactorialNumbers(result, n, 1);
}


