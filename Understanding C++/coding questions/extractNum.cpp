#include<bits/stdc++.h>
using namespace std;

int fun(string &s) {
    vector<int> num;
    stringstream ss(s);
    string token;
    while(ss>>token){
        bool f=true;
        for(char j: token){
            if(isdigit(j)) continue;
            else{
                f=false;
                break;
            }
        }
        if(f and (token.find('9')==string::npos)) num.push_back(stoi(token));
    }
    int ans=*max_element(num.begin(),num.end());
    return ans;
}

int main() {
    string s;
    getline(cin, s);
    cout<<fun(s)<<endl;;
    return 0;
}

/*extract valid numbers from a string and print the maximum number which does not contain 9 as its digit*/
