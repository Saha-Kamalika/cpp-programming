#include<iostream>
#include<stdexcept>
using namespace std;

int main(){
  try{
    throw 0;
  }
  catch(char c){
    cout<<c<<endl;
  }
  catch(int err){
    cout<<err<<endl;
  }
  catch(const char* err){
    cout<<err<<endl;
  }
  catch(runtime_error &err){
    cout<<err.what()<<endl;
  }
  catch(...){   //catch all exceptions
    cout<<"some unknown exception occured"<<endl;
  }
  return 0;
}
