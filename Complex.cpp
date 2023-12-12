#include<iostream>
using namespace std;
class Complex{ 
	private: float real;
			 float img;
			 static int cnt;
	public: 
			Complex(){
				img=real=0.0;
				cnt++;
			}
			Complex(float real,float img){
				this->real=real;
				this->img=img;
				cnt++;
			}
			Complex addComplex(Complex c){
				Complex temp;
				temp.real=this->real+c.real;
				temp.img=this->img+c.img;
				return temp;
			}
			void addComplex2(Complex c1,Complex c2){
				this->real=c1.real+c2.real;
				this->img=c1.img+c2.img;
			}
			void display1(){
				cout<<"After addition, the result is ";
				cout<<real<<"+i"<<img<<endl;
			}
			void display(Complex t){
				cout<<"After addition, the result is ";
				cout<<t.real<<"+i"<<t.img<<endl;
			}
			void showCnt(){
				cout<<"No. of objects created "<<cnt<<endl;
			}
};
int Complex::cnt=0;
int main(){
	Complex temp;
	Complex c1(2.0,4.0);
	Complex c2(4.0,6.0);
	temp=c1.addComplex(c2);
	c1.display(temp);
	Complex c3;
	c3.addComplex2(c1,c2);
	c3.display1();
	c3.showCnt();
}
