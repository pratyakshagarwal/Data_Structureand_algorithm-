#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
	int count = 0;	
	string numStr = to_string(n);

	for (char digits: numStr){

		int digit = digits - '0';
		if (digit != 0 && n%digit==0){
			count++;
		}
	}

	return count;
}