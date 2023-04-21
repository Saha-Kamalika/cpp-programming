#include<iostream>
using namespace std;
class Date{
	private: int day, month, year;
	public: 
	Date(int day, int month, int year){
		this->day=day;
		this->month=month;
		this->year=year;
	}
	void print(){
		cout<<day<<"/"<<month<<"/"<<year<<endl;
	}
void operator++(int d){
	bool isLeap=false;
	if((year%4==0) && ((year%400==0) || (year%100!=0))) 
		isLeap=true;
	int days;
	switch(month){
		case 2:	    days=isLeap?29:28;
				    break;
		case 4: case 6: case 9: 
		case 11:    days=30;
				    break;
		default:    days=31;
				    break;
	}
	if(day<days){
		day++;
	}
	else{
		day=1;
		if(month<12) month++;
		else{
			month=1;
			year++;
		}
	}
}
};
int main(void){
	Date d(28,2,2024);
	cout<<"Current Date: ";
	d.print();
	d++;
	cout<<"Next Date: ";
	d.print();
}
