#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2, s3;
    cin>>s1>>s2>>s3;

    for(int i=0;i<s1.size();i++) {
        if(s1[i]=='a' or s1[i]=='e' or s1[i]=='i' or s1[i]=='o' or s1[i]=='u') s1[i]='%';
    }
    for(int i=0;i<s2.size();i++){
        if(s2[i]!='a' and s2[i]!='e' and s2[i]!='i' and s2[i]!='o' and s2[i]!='u') s2[i]='#';
    }
    for(int i=0;i<s3.size();i++){
        if(s3[i]>=97 and s3[i]<=122) s3[i]=s3[i]-32;
    }
    cout<<s1<<s2<<s3<<endl;
    return 0;
}