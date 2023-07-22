#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> s){
    stack<int> ns=s;
    while(!ns.empty()){
        cout<<ns.top()<<" ";
        ns.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    cout<<"The stack is "<<endl;
    print(s1);
    cout<<"Top element is "<<s1.top()<<endl;
    cout<<"Size of the stack: "<<s1.size()<<endl;
    s1.pop();
    cout<<"Top element is "<<s1.top()<<endl;
    cout<<"Size of the stack: "<<s1.size()<<endl;
}
