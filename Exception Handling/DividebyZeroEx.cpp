#include<iostream>
#include<exception>
using namespace std;

int main(){
  int a=2,b=0;
  try{
    if(b==0) throw "divide by 0 error";
    cout<<a/b<<endl;
  }catch (const char* e){
    cout<<"Exception occurred "<<endl<<e<<endl;
  }
  return 0;
}
