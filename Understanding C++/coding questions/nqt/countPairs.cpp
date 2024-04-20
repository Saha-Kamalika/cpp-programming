/*
find the count of pairs which are divisible by 2 (avoid counting duplicate pairs)
*/
#include<bits/stdc++.h>
using namespace std;
int countPairs(int arr[], int n){
    int count=0;
    map<pair<int,int>,bool> mp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int a=arr[i];
            int b=arr[j];
            pair<int,int> p=make_pair(a,b);
            if((a+b)%2==0 and mp[p]!=true){
                count++;
                mp[p]=true;
            }
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<countPairs(arr,n)<<endl;
    return 0;
}

/*
8
2 2 2 2 1 7 5 3
7
*/