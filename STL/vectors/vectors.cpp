#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> v1;
    v1.push_back("I love you ");
    v1.push_back("bishtu");
    for(vector<string>::iterator it=v1.begin();it!=v1.end();it++)
        cout<<*it;
    return 0;
}