#include<iostream>
using namespace std;
class abc
{
	int a,b;
	public:
		abc(int x,int y)
		{
			a=x;
			b=y;
		}
		void dis1()
		{
			cout<<a<<"\n"<<b;
		}
		void dis2()
		{
			cout<<"wrong";
		}
};
int main()
{
	int a,b;
	cin>>a>>b;
	try
	{
		if(a==0 && b==0)
			throw abc(a,b);
		else
		{
			abc o(a,b);
			o.dis1();
		}		
	}
	catch(abc o1)
	{
		o1.dis2();
	}
}
