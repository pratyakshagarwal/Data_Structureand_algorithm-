#include<iostream>
#include<vector>
bool checkArmstrong(int n){
	if (n == 0) {
        return false;
    }
    if (n == 1) {
        return true;
    }

    int count = 0;
    int originalno = n;
    std::vector<int> no; // Include <vector> for using vectors

    while (n != 0) {
        int lastdigit = n % 10;
        count++;
        n = n / 10;
        no.push_back(lastdigit);
    }

    int newno = 0; // Initialize newno to 0

    for (auto it : no) {
        newno = newno + pow(it, count);
    }

    if (newno == originalno) {
        return true; // Return true for true condition
    } else {
        return false; // Return false for false condition
    }
}