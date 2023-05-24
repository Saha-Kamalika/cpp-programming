#include<iostream>
#include<stdexcept>
using namespace std;
/*
std: logic_failure--> domain_error, invalid_argument, length_error, out_of_range
std: runtime_error--> overflow_error, range_error, underflow_error
*/

int main(){
  int a=2,b=0;
  try{
    if(b==0)
      throw runtime_error("divide by zero error"); //runtime_error class returns an object, it overrides the what() method
    cout<<a/b<<endl;
  }catch(runtime_error &er){   //er is the object returned by runtime_error class
    cout<<er.what()<<endl;
  }
  return 0;
}