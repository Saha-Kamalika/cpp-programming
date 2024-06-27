#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int n1=mid-low+1;
    int n2=high-mid;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++) L[i]=arr[low+i];
    for(int i=0;i<n2;i++) R[i]=arr[mid+1+i];
    int i=0,j=0,k=low;
    while(i<n1 and j<n2){
        if(L[i]<=R[j]){
            arr[k++]=L[i];
            i++;
        }
        else {
            arr[k++]=R[j];
            j++;
        }
    }
    while(i<n1){
        arr[k++]=L[i++];
    }
    while(j<n2){
        arr[k++]=R[j++];
    }
}
void mergeSort(int arr[],int low,int high){
    if(low<high){
        int mid=low+(high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main(){
    int arr[]={5,4,1,2,3};
    mergeSort(arr,0,4);
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
}