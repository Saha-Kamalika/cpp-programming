#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream file;
	file.open("kam.txt"); //default mode : in
	if(!file.is_open()) cout<<"error in opening file"<<endl;
	else{
		string line;
		cout<<"Reading from file"<<endl;
		while(!file.eof()) //file.good()
		{
			getline(file,line);
			cout<<line<<endl;
		}
		file.close();
	}
	return 0;
}
