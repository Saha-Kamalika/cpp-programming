#include<bits/stdc++.h>
using namespace std;
void park(string plateNumber, map<string,int> &mp){
    mp[plateNumber]=mp.size();
    cout<<"CAR PARKED AT POSITION "<<mp.size()<<endl;
}
void search(string plateNumber, map<string,int> &mp){
    if(mp.find(plateNumber)==mp.end()) cout<<"CAR DOES NOT EXISTS"<<endl;
    else cout<<"CAR POSITION: "<<mp[plateNumber]<<endl;
}
int main(){
    map<string,int> mp;
    
    mp["MH04CC2"]=1;
    mp["MH04C2820"]=2;
    mp["MHO4BB3232"]=3;
    mp["MH04CC2113"]=4;
    
    string plateNumber;
    int ch;
    cout<<"Enter 1 to park and 2 to search: ";
    cin>>ch;
    if(ch==1){
        cin>>plateNumber;
        if(plateNumber.size()>=6 and plateNumber.size()<=12) park(plateNumber,mp);
        else cout<<"INVALID plateNumber"<<endl;
    }
    else if(ch==2){
        cin>>plateNumber;
        search(plateNumber,mp);
    }
    else cout<<"INVALID choice"<<endl;
    return 0;
}