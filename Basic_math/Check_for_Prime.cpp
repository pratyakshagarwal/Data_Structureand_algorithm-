#include<bits/stdc++.h>
bool isPrime(int n)
{
	if (n == 1){
		return false;
	}
	bool flag = true;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0){
			flag = false;
		}
	}

	return flag;
}
