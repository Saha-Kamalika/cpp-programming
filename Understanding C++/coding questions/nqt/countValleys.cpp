/*An avid hiker keeps meticulous records of their hikes. During the last hike that took exactly  steps, for every step it was noted if it was an uphill, , or a downhill,  step. Hikes always start and end at sea level, and each step up or down represents a  unit change in altitude. We define the following terms:

A mountain is a sequence of consecutive steps above sea level, starting with a step up from sea level and ending with a step down to sea level.
A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up to sea level.
Given the sequence of up and down steps during a hike, find and print the number of valleys walked through.

Sample Input

8
UDDDUDUU               
Sample Output

1

_/\      _ 
   \    /
    \/\/
*/
#include<bits/stdc++.h>
using namespace std;
int countValleys(string &s,int n){
    int seaLvl=0, valleys=0;
    for(char c: s){
        if(c=='U') seaLvl++;
        else seaLvl--;
        if(c=='U' and seaLvl==0) valleys++;  //increase valleycount when last step is upward and sealevel is 0
    }
    return valleys;
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<countValleys(s,n);
    return 0;
}

