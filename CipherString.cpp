/*The Caesar cipher is a type of substitution cipher in which each alphabet in the plaintext or messages is shifted by a number of places down the alphabet.
For example,with a shift of 1, P would be replaced by Q, Q would become R, and so on.
To pass an encrypted message from one person to another, it is first necessary that both parties have the ‘Key’ for the cipher, so that the sender may encrypt and the receiver may decrypt it.*/

   
#include <bits/stdc++.h>
using namespace std;
int main(){
    int key;
    string s;
    getline(cin,s);
    cin>>key;
    if(key==0) cout<<"INVALID INPUT"<<endl;
    else{
        int i, left;
        while(s[i]!='\0'){
            if(s[i]>=48 && s[i]<=57){
            if(s[i]+key<=57) s[i]=s[i]+key;
            else
            {
                left=(s[i]+key)-57;
                s[i]=47+left;
            }   
            }
            else if(s[i]>=65 && s[i]<=90){
            if(s[i]+key<=90) s[i]=s[i]+key;
            else
            {
                left=(s[i]+key)-90;
                s[i]=64+left;
            }   
            }
            else if(s[i]>=97 && s[i]<=122){
            if(s[i]+key<=122) s[i]=s[i]+key;
            else
            {
                left=(s[i]+key)-122;
                s[i]=96+left;
            }   
            }
        i++;
    }
    cout<<s<<endl;
    return 0;
    }
}
