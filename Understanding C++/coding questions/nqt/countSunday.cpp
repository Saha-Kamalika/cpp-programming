#include<bits/stdc++.h>
using namespace std;
int countSun(string &day, int totalDays){
    unordered_map<string,int> mp;
    mp["mon"]=6, mp["tue"]=5, mp["wed"]=4, mp["thu"]=3, mp["fri"]=2, mp["sat"]=1, mp["sun"]=0;
    int daysToSunday= totalDays-mp[day.substr(0,3)];
    int ans=0;
    if(daysToSunday>=1){
        ans=1+(daysToSunday/7);
    }
    return ans;
}
int main(){
    string day;
    cin>>day;
    int totalDays;
    cin>>totalDays;
    cout<<countSun(day,totalDays);
    return 0;
}
//count no of sundays , given the starting day and the no of days from the start of the month

// monday 13
// 2