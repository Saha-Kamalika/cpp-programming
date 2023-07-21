#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    for(int i=1;i<10;i++)
        s.insert(i*10);
    set<int>::iterator it1=s.begin();
    while(it1!=s.end()){
        cout<<*it1<<" ";
        it1++;
    }
    cout<<endl;
    set<int>::iterator lb,ub;
    lb=s.lower_bound(30);
    ub=s.upper_bound(70);
    s.erase(lb,ub);
    set<int>::iterator it2=s.begin();
    while(it2!=s.end()){
        cout<<*it2<<" ";
        it2++;
    }
    cout<<endl;
}
