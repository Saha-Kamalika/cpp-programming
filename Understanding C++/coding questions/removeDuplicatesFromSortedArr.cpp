/*Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

Note: Return k after placing the final result in the first k slots of the array.

Using set: O(nlogn)
Using 2 pointer approach: O(n)*/

#include<bits/stdc++.h>
using namespace std;
int removeDup(int arr[], int n){
    int i=0;
    for(int j=1;j<n;j++){
         i++;
        if(arr[i]!=arr[j]){
           
            arr[i]=arr[j];
        }
    }
    return i+1;
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int arr[]={1,1,2,3,3,4,4,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int size=removeDup(arr,n);
    printArr(arr,size);
    return 0;
}
