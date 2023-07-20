/*a vector can be initialized by 4 ways:
By entering the values one-by-one
By using an overloaded constructor of the vector class
By the help of arrays
By using another initialized vector
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v1;
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(3);
  v1.push_back(4);
  for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
  cout<<endl;

  int number=10;
  vector<int> v2(number,156);
  for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";
  cout<<endl;

  vector<int> v3{1,2,3,4};
  for(int i=0;i<v3.size();i++)
    cout<<v3[i]<<" ";
  cout<<endl;

  vector<int> v4{1,2,3,4};
  vector<int> v5(v4.begin(),v4.end());
  for(int i=0;i<v5.size();i++)
    cout<<v5i]<<" ";
  cout<<endl;
}