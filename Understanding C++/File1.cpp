#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file;
	file.open("kam.txt",ios::in | ios::out | ios::trunc);
	if(!file.is_open()) cout<<"Error in opening the file"<<endl;
	else{
		cout<<"File opened successfully"<<endl;
		file.close();
	}
	return 0;
}
