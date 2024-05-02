#include<bits/stdc++.h>
using namespace std;
bool checkHard(string &s){
    string vow="aeiou";
    for(int i=0;i<s.size()-2;i++){
        if((vow.find(s[i])==string::npos)and (vow.find(s[i+1])==string::npos) and (vow.find(s[i+2])==string::npos))
        return true;
    }
    int conso=0,vowel=0;
    for(int i=0;i<s.size();i++){
        if(vow.find(s[i])==string::npos) conso++;
        else vowel++;
    }
    if(conso>vowel) return true;
    return false;
}
int fun(string &s){
    stringstream ss(s);
    string word;
    int hard=0,easy=0;
    while(ss>>word){
        if(checkHard(word)) hard++;
        else easy++;
    }
    return (5*hard)-(2*easy);
}
int main(){
    string s;
    getline(cin,s);
    cout<<fun(s);
}

/*
hard words: conso>vowel or consecutive 3 conso
else easy words
return difficulty quotient: (5*hard)-(2*easy)
qiewldoaa life ace by fantasy
11

*/