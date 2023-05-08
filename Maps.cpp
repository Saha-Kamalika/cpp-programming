#include<iostream>
#include<map>
#include<string>
using namespace std;
void display(map<string,int> &m){
  map<string,int> :: iterator it;
  cout<<"Displaying your map...."<<endl;
  for(it=m.begin();it!=m.end();it++){
    cout<<(*it).first<<" ---> "<<(*it).second<<endl;
  }
  cout<<endl;
}
int main(){
  map<string,int> maps;
  maps["Rumi"]=90;
  maps["Bishtu"]=99;
  maps["Kakima"]=100;
  display(maps);
  maps.insert({{"Kaku",101},{"Srijit", 87}});
  display(maps);
}