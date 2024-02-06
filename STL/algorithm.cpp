#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> v = {2, 3, 4, 1, 87};
  for (int i : v) {
    cout << i << " ";
  }
  sort(v.begin(), v.end());
  cout << "After sorting" << endl;
  for (int i : v) {
    cout << i << " ";
  }
  cout << "7 found? -> " << binary_search(v.begin(), v.end(), 7) << endl;
  rotate(v.begin(), v.begin() + 2, v.end());
  cout << "After sorting" << endl;
  for (int i : v) {
    cout << i << " ";
  }
  string name = "kamalika";
  reverse(name.begin(), name.end());
  cout << name << endl;
  ;

  int a = 69, b = 96;
  swap(a, b);
  cout << "a->" << a << " "
       << "b->" << b << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> v{1,2,3,4,3,4,5,6};
    
    //min_element
    int min= *min_element(v.begin(), v.end());
    cout<<"Min element: "<<min<<endl;
    
    //max_element
    int max= *max_element(v.begin(), v.end());
    cout<<"Max element: "<<max<<endl;
    
    //sum 
    int sum= accumulate(v.begin(), v.end(), 0);
    cout<<"Sum of all elements: "<<sum<<endl;
    
    //count
    int c= count(v.begin(), v.end(), 3);
    cout<<"Frequency of 3: "<<c<<endl;
    
    //find
    auto it=find(v.begin(), v.end(), 3);
    if(it!=v.end()) cout<<"Element found"<<endl;
    else cout<<"Not found"<<endl;
    
    //reverse
    reverse(v.begin(),v.end());
    cout<<"After reversal: "<<endl;
    for(auto e: v) cout<<e<<" ";
    cout<<endl;
}

