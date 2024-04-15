#include<bits/stdc++.h>
using namespace std;
int findSum(string s){
    string temp;
    int sum=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' and s[i]<='9'){
            temp+=s[i];
        }
        else{
            sum+=atoi(temp.c_str());
            temp="";
        }
    }
    return sum+atoi(temp.c_str());
}
int main(){
    string s;
    cin>>s;
    cout<<"Sum: "<<findSum(s)<<endl;
    return 0;
}