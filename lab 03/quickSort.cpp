#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i=l-1;
    int j=l;
    while(j<r){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    swap(arr[i+1], arr[r]);
    return i+1;
}

void quickSort(int arr[], int l, int r) {
    if (l < r) {
        int p = partition(arr, l, r);
        quickSort(arr, l, p - 1);
        quickSort(arr, p + 1, r);
    }
}


void printArray(int arr[], int n){
    for(int i=0; i<n; ++i){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main(){
    int arr[] = {3,7,1,8,2,33};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    quickSort(arr, 0, n-1);
    printArray(arr, n);
return 0;}
