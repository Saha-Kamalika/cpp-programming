#include<bits/stdc++.h>
using namespace std;

string convertToNormal(string &s){
    string temp="";
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            if(i!=0) temp+=' ';
            s[i]=tolower(s[i]);
            temp+=s[i];
        }
        else temp+=s[i];
    }
    return temp;
}
int main(){
    string s;
    cin>>s;
    string ans=convertToNormal(s);
    cout<<ans<<endl;
    return 0;
}

/*given a string in uppercase the task is to add a space after each word and convert the uppercase to lowercase
input: ThisIsAnAutomatedCar
output: this is an automated car
*/