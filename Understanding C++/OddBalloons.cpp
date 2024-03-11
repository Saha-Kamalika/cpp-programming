/*At a fun fair, a street vendor is selling different colours of balloons. He sells N number of different colours of balloons (B[]). The task is to find the colour (odd) of the balloon which is present odd number of times in the bunch of balloons.*/


#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    char c[N];
    for(int i=0;i<N;i++) cin>>c[i];
    for(int i=0;i<N;i++){
        if(c[i]>='A' && c[i]<='Z') c[i]=c[i]-'A'+'a';
    }
    int freq[26]={0};
    for(int i=0;i<N;i++){
        freq[c[i]-'a']++;
    }
    bool flag=false;
    for(int i=0;i<N;i++){
        if(freq[c[i]-'a']%2==1){
            flag=true;
            cout<<c[i]<<endl;
            exit(0);
        }
    }
    if(flag==false) cout<<"All are even"<<endl;
    return 0;
}
