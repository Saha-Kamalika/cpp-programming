#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
template <class T>
void display(vector<T> &v){
  cout<<"Displaying your vector.... "<<endl;
  for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
  cout<<endl;
}
int main(){
  vector<int> vec1; //zero length vector
  vector<int> vec2(3,6); //3-length vetor of 6
  int size,ele;
  cout<<"Enter the size of the vector: "<<endl;
  cin>>size;
  for(int i=0;i<size;i++){
    cout<<"Enter element "<<i+1<<" of the vector: "<<endl;
    cin>>ele;
    vec1.push_back(ele);
  }
  vector<int>:: iterator iter=vec1.begin(); //iter points to the beginning of the vector
  vec1.pop_back();
  vec1.insert(iter, 156);
  display(vec1);
}