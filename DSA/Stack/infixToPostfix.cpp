#include<iostream>
#include<stack>
using namespace std;

int pre(char);
void postfix(string s){
  stack<char> st;
  string post="";
  for(int i=0;i<s.length();i++){
    char c=s[i];
    if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9'))
      post+=c;
    else if(c=='(') st.push('(');

  else if(c==')'){
    while(st.top()!='('){
      post+=st.top();
      st.pop();
    }
    st.pop();   //pops the remaining (
  }

  else {
    while(!st.empty() && pre(c)<=pre(st.top())){
      post+=st.top();
      st.pop();
    }
    st.push(c);
  }
  }
  while(!st.empty()){
    post+=st.top();
    st.pop();
  }
   cout<<post<<endl;
}
int pre(char c){
  if(c=='^') return 3;
  else if(c=='*' || c=='/') return 2;
  else if(c=='+' || c=='-') return 1;
  else return -1;
}
int main(){
  string s;
  cout<<"Enter the infix expression: ";
  cin>>s;
  cout<<"The postfix expression is: ";
  postfix(s);
  return 0;
}