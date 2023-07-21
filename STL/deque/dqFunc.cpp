#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<string> dq={"is","string","deque"};
    dq.push_front("This");
    dq.emplace_back("example");
    for(deque<string>::iterator it=dq.begin();it!=dq.end();it++)
        cout<<*it<<" ";
    cout<<endl;
  
    int size=dq.size();
    dq.resize(size+1,"1");
    for(deque<string>::iterator it=dq.begin();it!=dq.end();it++)
        cout<<*it<<" ";
    cout<<endl;
  
    deque<string>:: iterator it=dq.end();
    dq.insert(it,"below");
    for(deque<string>::iterator it=dq.begin();it!=dq.end();it++)
        cout<<*it<<" ";
    cout<<endl;
  
    //using constant iterator
    deque<string>::const_iterator itr;
    itr=dq.cbegin();
    for(int i=0;i<dq.size();i++)
        cout<<*(itr+i)<<" ";
    cout<<endl;
  
    //reverse iterator
    deque<string>::reverse_iterator rit=dq.rbegin();
    for(rit=dq.rbegin();rit!=dq.rend();rit++)
        cout<<*rit<<" ";
    cout<<endl;
}
