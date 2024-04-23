#include<bits/stdc++.h>
using namespace std;
int countOcc(string &s,string sub){
    int count=0;
    size_t pos=s.find(sub);  //stored in size_t as it returns large value when string not found
    while(pos!=string::npos){
        count++;
        pos=s.find(sub,pos+sub.size());
    }
    return count;
}
int main(){
    string s="Tata Consultancy Services (TCS) is a global leader in IT services, consulting, and business solutions. With a robust workforce and a presence in over 46 countries, TCS is renowned for its innovative approach to technology and its commitment to client success. Established in 1968, TCS continues to push the boundaries of digital transformation and remains a cornerstone in the tech industry. TCS";
    string sub="TCS";
    cout<<countOcc(s,sub);
    return 0;
}