#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findUnique(int arr[], int size) {
    // Write your code here

  
}


void main(){
    int arr[] = {1 ,3 ,1 ,3 ,6 ,6 ,7 ,10 ,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int unq = findUnique(arr, size);
    cout << "Unique in the array is: " << unq;
}