#include<bits/stdc++.h>
using namespace std;

vector<string> str;
vector<string> printNTimes(int n) {
	if (n == 0){
		return str;
	}
	cout<<"Coding Ninjas ";
	printNTimes(n-1);

	return str;
}