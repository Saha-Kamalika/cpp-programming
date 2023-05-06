#include<iostream>
using namespace std;
template<class T1 = int,class T2 = char> //comma separated
class MyTemplate{
public:
T1 a;
T2 b;
MyTemplate(T1 a,T2 b){
  this->a=a;
  this->b=b;
}
void show(){
  cout<<"Value of a is "<<a<<endl;
  cout<<"Value of b is "<<b<<endl;
}
};
int main(){
  MyTemplate<> m(1,'c');
  m.show();
  return 0;
}