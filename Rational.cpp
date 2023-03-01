#include<iostream>
#include<cstdlib>
using namespace std;
class Rational{
	private: 
			int p,q;
	public: 
			Rational(int p=0,int q=1){
				this->p=p;
				this->q=q;
			}
			void setRational(int x,int y)
			{
				p=x;
				q=y;
			}
			void normalize()
			{
				int n;
				if(q<0)
				{
					q=abs(q);
					p=-p;
				}
				n=(abs(p)>abs(q))?abs(q):abs(p);
				for(n;n>=1;n--){
					if((abs(p)%n==0) && q%n==0){
						p/=n;
						q/=n;
						break;
					}
				}
			}
			void show()
			{
				cout<<"p/q = "<<p<<"/"<<q<<endl;
			}
};
int main()
{
	Rational r1(4,-5);
	r1.normalize();
	r1.show();
}
