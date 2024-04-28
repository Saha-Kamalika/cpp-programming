#include<bits/stdc++.h>
using namespace std;
string convertToNBaseNotation(int num,int n){
    unordered_map<int,char> mp;
    mp[0]=0,mp[1]='1',mp[2]='2',mp[3]='3',mp[4]='4',mp[5]='5',mp[6]='6',mp[7]='7',mp[8]='8',mp[9]='9',mp[10]='A',mp[11]='B',mp[12]='C',mp[13]='D',mp[14]='E',mp[15]='F',mp[16]='G',mp[17]='H',mp[18]='I',mp[19]='J',mp[20]='K',mp[21]='L',mp[22]='M',mp[23]='N',mp[24]='O',mp[25]='P',mp[26]='Q',mp[27]='R',mp[28]='S',mp[29]='T',mp[30]='U',mp[31]='V',mp[32]='W',mp[33]='X',mp[34]='Y',mp[35]='Z';
    string ans="";
    while(num>0){
        int rem=num%n;
        ans.push_back(mp[rem]);
        num=num/n;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    int n, num;
    cin>>n>>num;
    cout<<convertToNBaseNotation(num,n);
    return 0;
}