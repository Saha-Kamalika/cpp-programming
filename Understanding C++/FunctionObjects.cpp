#include<iostream>
#include<functional>
#include<algorithm>

/* Function obejcts(Functors)-->Functions wrapped in a class such that it is available like an object */

using namespace std; 
int main(){
  int arr[]={4,3,5,6,2};
  int i;
  sort(arr,arr+5,greater<int> ());
  for(i=0;i<5;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
  return 0;
}