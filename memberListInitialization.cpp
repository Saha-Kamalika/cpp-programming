#include<iostream>
using namespace std;
class Initialize{
    int a,b;
    const int k;
    public:
            Initialize();
            Initialize(int,int);
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
};
Initialize::Initialize():a(0), b(0), k(100) //memberlist initialization
{
    /*
    a=0;
    b=0;*/
    //k=100; // cannot be initialized as it's const....memberList initialization used for this purpose
}
Initialize::Initialize(int x,int y): a(x), b(y), k(500)
{
    /*
    a=x;
    b=y;*/
}

int main()
{
    Initialize i;
    i.display();
    return 0;
}