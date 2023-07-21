#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    set<int>::iterator it;
    set<int>::const_iterator itr;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    it=s.begin();
    cout<<"The first element of this set is "<<*it<<endl;
    
    s.erase(it);
    it=s.begin();
    cout<<"The first element of this set is "<<*it<<endl;
    itr=s.begin();
    s.erase(itr);
    itr=s.begin();
    cout<<"The first element of this set is "<<*itr<<endl;
    
    set<int> s1={1,3,2,6,4,5};
    set<int>::iterator it1=s1.begin();
    while(it1!=s1.end()){
        cout<<*it1<<" ";
        it1++;
    }
    cout<<endl;
    int c=s1.count(1);
    cout<<c<<endl;
    s1.clear();
    if(s1.empty()) cout<<"set empty";
}
