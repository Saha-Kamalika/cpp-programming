#include<iostream>
#include<stdexcept>
#define throw(...)
using namespace std;

void func() throw(int,char,runtime_error){
  //throw 69;
  //throw 'k';
  throw runtime_error("save me");
}
int main(){
  try{
    func();
  }
  catch(int i){
    cout<<"Integer type "<<i<<endl;
  }
  catch(char c){
    cout<<"character type "<<c<<endl;
  }
  catch(runtime_error &r){
    cout<<"runtime error type "<<r.what()<<endl;
  }
  return 0;
}