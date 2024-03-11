#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream file("new.txt",ios::in | ios:: out | ios::app );
	if(!file.is_open()) cout<<"error in opening file.."<<endl;
	else{
		cout<<"file opened successfully.."<<endl;
		cout<<"writing to the file"<<endl;
		file<<"this is a practice file.."<<endl;
	}
	file.seekg(0);
	cout<<"reading fromm file: "<<endl;	
	string line;
	while(file.good()){
		getline(file,line);
		cout<<line<<endl;
	}
	return 0;
}
