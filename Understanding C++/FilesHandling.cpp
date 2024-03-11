#include <fstream>
#include <iostream>
using namespace std;
/*
  The classes for working with files in c++ are:
  1. fstreambase
  2. ofstream  -->derived from fstreambase
  3. ifstream   -->derived from fstreambase

  Files can be opened in 2 ways:
  1. using the constrcutor
  2. using the member function open() of the class
*/
int main() {
  // Writing to a file using constructor
  string s1 = "Hi this is my output file";
  string s2;
  ofstream out("Sample1.txt");
  out << s1;

  // Writing to a file using open()
  string s3 = "Hi this is my output file";
  ofstream oout;
  oout.open("Sample1.txt");
  oout<<s3;
  oout.close(); //mandatory

  // Reading from a file
  ifstream in("Sample2.txt");
  //in >> s2; // gets a single word
  //cout << s2;
  //getline(in, s2);
  //cout << s2;

  //Reading from a file using eof()-->end of line
  while(in.eof()==0){
    getline(in,s2);
    cout<<s2<<endl;
  }
  in.close();
  
  return 0;
}
