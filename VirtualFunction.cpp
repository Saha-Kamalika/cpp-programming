/*
Rules for virtual functions:
1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be a friend of another class
4. A virtual function in a base class might not be used
5. If a virtual function is defined in base class, there is no necessity of redefining it in derived class
*/

#include<iostream>
using namespace std;
class Study{
protected:
    string title;
    float rating;
public:
    Study(string t,float r){
      title=t;
      rating=r;
    }
    virtual void display(){}
};
class Video: public Study{
    float vlen;
public:
    Video(string t, float r, float v): Study(t,r){
      vlen=v;
    }
void display(){
  cout<<"Title of the video is "<<title<<endl;
  cout<<"Rating: "<<rating<<" out of 5 stars"<<endl;
  cout<<"Duration of the video is "<<vlen<<" minutes"<<endl;
}
};
class Text: public Study{
    int words;
public:
    Text(string t, float r, int w): Study(t,r){
      words=w;
    }
void display(){
  cout<<"\nTitle of the text material is "<<title<<endl;
  cout<<"Rating: "<<rating<<" out of 5 stars"<<endl;
  cout<<"No of words in the material is "<<words<<" words"<<endl;
}
};
int main(){
  string title;
  float rating,vlen;
  int words;
  //creating video object
  title="C++ Tutorial";
  rating=4.5;
  vlen=50;
  Video v(title,rating,vlen);

  //creating text object
  title="C++ Tutorial textual material";
  rating=4.3;
  words=420;
  Text t(title,rating,words);

  Study* res[2];  //base class pointers
  res[0]=&v;  //1st base class pointer pointing to the object of the derived video class
  res[1]=&t;  //2nd base class pointer pointing to the object of the derived text class
  res[0]->display();   //video class display() gets called as the base class display() is declared as virtual
  res[1]->display();

  return 0;
}