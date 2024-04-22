/*perform right circular rotations and return the value of the element at a given index

3 1
3 4 5
Enter space separated indices positions: 1 2 
output: 3 4 
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> rotateRight(int arr[],int n,int k,string &ind){
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        ans[(i+k)%n]=arr[i];
    }
    vector<int> v;
    stringstream ss(ind);
    string index;
    while(ss>>index){
        int i=stoi(index);
        v.push_back(ans[i]);
    }
    return v;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cin.ignore();
    string ind;
    cout<<"Enter space separated indices positions: ";
    getline(cin,ind);
    vector<int> ans=rotateRight(arr,n,k,ind);
    for(int i: ans) cout<<i<<" ";
    return 0;
}