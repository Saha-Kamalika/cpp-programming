#include <bits/stdc++.h>
using namespace std;
int main(){
    string par;
    cin>>par;
    string x;
    cin>>x;
    if(x=="N"){
        cout << "TOTAL MEMBERS:1\n";
        cout << "COMISSION DETAILS\n";
        cout << par << ":250 INR\n";
    }
    else{
        string child;
        cin>>child;
        vector<string> v;
        string temp="";
        for(int i=0;i<child.length();i++){
            if(child[i]==','){
                v.push_back(temp);
                temp="";
            }
            else temp += child[i];
        }
    v.push_back(temp);
    cout << "TOTAL MEMBERS: "<<v.size()+1<<endl;
    cout << "COMISSION DETAILS\n";
    cout << par <<":"<<v.size()*500<<" INR"<<endl;
    for(auto c: v){
        cout<<c<<":250 INR"<<endl;
    }
}
}
