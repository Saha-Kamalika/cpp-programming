#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception{
    public:
        const char * what() const throw(){
            return "Attempting to divide by 0";
        }
};
int main(){
    try{
        int x, y;
        cout<<"Enter two numbers: "<<endl;
        cin>>x>>y;

        if(y==0){
            MyException e;
            throw e;
        } 
        else{
            cout<<"ans is "<<x/y<<endl;
        }
    }
    catch(exception& e){
        cout<<e.what();
    }
    return 0;
}