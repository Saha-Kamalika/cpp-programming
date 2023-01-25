#include<iostream>
using namespace std;
/*int getValue(){
    return 10;
}
namespace ns{
    int getValue(){
    return 5;
    }
}
namespace ns1{
    double x=4.0;
    double getValue()
    {
        return 2*x;
    }
}*/
/*namespace ns1{               //nested namespace
    int x=10;
    namespace ns2{
        int x=20;
        namespace ns3{
            int y=40;
        }
    }
}*/
namespace ns{
    class Test;/*{
            cout<<"Namespace Class"<<endl;
        }*/
}
class ns::Test{
    public: void display(){
        cout<<"Namespace class defined outside ns"<<endl;
    }
};
int main()
{
    /*cout<<ns::getValue()<<endl;
    cout<<ns1::getValue()<<endl;
    cout<<getValue()<<endl;*/
    /*cout<<ns1::x<<endl;
    cout<<ns1::ns2::ns3::y<<endl;
    namespace ns= ns1::ns2::ns3; //namespace aliasing
    cout<<ns::y<<endl;*/
    ns::Test t;
    t.display();
    return 0;
}