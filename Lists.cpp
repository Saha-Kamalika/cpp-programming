#include<iostream>
#include<list>
using namespace std;
void display(list<int> &l){
  list<int> :: iterator it2;
  cout<<"Displaying your list....."<<endl;
  for(it2=l.begin();it2!=l.end();it2++){
    cout<<*it2<<" ";
  }
  cout<<endl;
}
int main(){
  list<int> list1;
  list<int> :: iterator it1=list1.begin();
  int size,i,ele;
  cout<<"Enter the size of your list: ";
  cin>>size;
  for(i=0;i<size;i++){
    cout<<"Enter element "<<i+1<<" of the list: ";
    cin>>ele;
    list1.push_back(ele);
  }
  cout<<"Elements entered successfully"<<endl;
  list1.sort();
  display(list1);
}