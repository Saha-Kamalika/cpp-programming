#include<iostream>
using namespace std;
class Complex{
    private: 
            float real;
            float img;
    public: 
        Complex()
        {
            real=0.0;
            img=0.0;
        }
        Complex(float real,float img)
        {
            this->real=real;
            this->img=img;
        }
void addComplex(Complex c){
    Complex T;
    T.real=this->real+c.real;
    T.img=this->img+c.img;
    T.display();
}
void display()
{
    cout<<real<<"+i"<<img<<endl;
}};
int main(){
    Complex c1=Complex(4.0,6.0);
    Complex c2=Complex(8.0,10.0);
    c1.addComplex(c2);
    return 0;
}