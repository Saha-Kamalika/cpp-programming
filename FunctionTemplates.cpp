#include<iostream>
using namespace std;

template<class T>
void swapp(T &a,T &b){
  T t=a;
  a=b;
  b=t;
}
//Overloading function templates
void func(int a){
  cout<<"I am a normal function with a = "<<a<<endl;
}
template<class T>
void func1(T a){
  cout<<"I am a templatised function with a = "<<a<<endl;
}
int main(){
  int x=2,y=3;
  cout<<"Before swapping: "<<x<<" "<<y<<endl;
  swapp(x,y);
  cout<<"After swapping: "<<x<<" "<<y<<endl;
 
  func(4); //exact match gets 1st priority
  func1('k');
  return 0;
}