#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l1{1,2,3,4};
    list<int> l2={5,6,7};
    list<int>::iterator it=l1.begin();
    l1.insert(it,l2.begin(),l2.end()); //insert before the given position
    for(it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    
    list<int> l3={10,11,12};
    cout<<l1.front()<<endl;
    cout<<l1.back()<<endl;
    
    l1.swap(l3);
    for(it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    
    l2.merge(l1);
    for(it=l2.begin();it!=l2.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    
    l3.sort();
    for(it=l3.begin();it!=l3.end();it++)
        cout<<*it<<" ";
    cout<<endl;
}
