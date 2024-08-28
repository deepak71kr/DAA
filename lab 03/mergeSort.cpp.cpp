#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r-m;

    int arr1[n1];
    int arr2[n2];
    for(int i=0; i<n1; ++i)
        arr1[i] = arr[l+i];
    for(int i=0; i<n2; ++i)
        arr2[i] = arr[m+1+i];

    int i=0, j=0, k=l;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j])
            arr[k++] = arr1[i++];
        else
            arr[k++] = arr2[j++];
    }
    while(i<n1){
        arr[k++] = arr1[i++];
    }
    while(j<n2){
        arr[k++] = arr2[j++];
    }
}

void mergeSort(int arr[], int l, int r){
    if(l>=r) return;
    int m = l+ (r-l)/2;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    sort(arr, l, m, r);
}

void printArray(int arr[], int n){
    for(int i=0; i<n; ++i){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main(){
    int arr[] = {3,7,1,8,2,33,9,21};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    mergeSort(arr, 0, n-1);
    printArray(arr, n);
return 0;}
