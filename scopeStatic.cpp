#include<iostream>
using namespace std;
// scope resolution operator to access static/class variables
class Student{
    private: int roll;
    public: static int counter;
            int getData(){
                counter++;
                roll=counter;
                return roll;
            }
};
int Student::counter=0;
int main(){
    Student s1,s2,s3;
    cout<<"Student1 has roll = "<<s1.getData()<<endl;
    cout<<"Student2 has roll = "<<s2.getData()<<endl;
    cout<<"Student3 has roll = "<<s3.getData()<<endl;
    return 0;
}