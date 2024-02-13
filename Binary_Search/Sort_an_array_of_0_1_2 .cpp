#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // int noof0 = 0,noof1 = 0, noof2 = 0;
    // for(int i=0; i<n; i++){
    //     if (arr[i] == 0) noof0++;
    //     else if (arr[i] == 1) noof1++;
    //     else noof2++;
    // }

    // for (int i=0; i<noof0; i++){
    //     arr[i] = 0;
    // }
    // for (int i=n-(noof1+noof2); i<(noof0+noof1); i++){
    //     arr[i] = 1;
    // }
    // for (int i = n - (noof2); i < n; i++) {
    //     arr[i] = 2;
    // }

    // Dutch National flag algorithm 
    int low = 0, mid = 0, high = n-1;
    while (mid<=high){
        if (arr[mid] == 0){
            swap(arr[low], arr[mid]);
            mid++, low++;
        }
        else if (arr[mid] == 1){
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}