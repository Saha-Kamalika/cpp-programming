#include<iostream>
using namespace std;
class Box{
    private: 
            float length;
            float breadth;
            float height;
    public:
            void setData(float l,float b,float h);
            float getVolume();
};
void Box:: setData(float l,float b,float h){
    length=l;
    breadth=b;
    height=h;
}
float Box::getVolume(){
    return length*breadth*height;
}
int main(){
    Box B;
    B.setData(1.0,2.0,3.0);
    float v=B.getVolume();
    cout<<"Volume of the box is "<<v<<" cube units";
}