#include<bits/stdc++.h>
using namespace std;
void count(string &s){
    int vow=0, conso=0, dig=0, sp=0;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])) dig++;
        else if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u') vow++;
        else if(isalpha(s[i])) conso++;
        else sp++;
    }
    cout<<"Vowels: "<<vow<<endl;
    cout<<"Consonants: "<<conso<<endl;
    cout<<"Digits: "<<dig<<endl;
    cout<<"Special characters: "<<sp<<endl;
}
int main(){
    string s;
    cin>>s;
    count(s);
    return 0;
}