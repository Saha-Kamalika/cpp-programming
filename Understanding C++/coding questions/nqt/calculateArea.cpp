#include<bits/stdc++.h>
using namespace std;
#define PI 3.1416
float calArea(float d){
    return PI*(d/2)*(d/2);
}
int main(){
    float d;
    cin>>d;
    cout<<calArea(d);
    return 0;
}