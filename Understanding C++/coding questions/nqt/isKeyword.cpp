//word is the key
/*wap to find if the given word is a keyword or not*/

#include<bits/stdc++.h>
using namespace std;
bool searchKey(string &s){
    set<string> keywords={"break","case","continue","default","defer","else","for","func","goto","if","map","range","return","struct","type","var"};
    if(keywords.find(s)==keywords.end()) return false;
    return true;
}
int main(){
    string search;
    cin>>search;
    if(searchKey(search)) cout<<search<<" is a keyword"<<endl;
    else cout<<search<<" is not a keyword"<<endl;
    return 0;
 }