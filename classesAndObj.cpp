#include<iostream>

using namespace std;
class A
{
	public:
	 void method1()
	{
		cout<<"This is method 1 of class A\n";
	}
	void method2()
	{
		cout<<"This is method 2 of class A\n";
	}
};
int main()
{
	A a;
	a.method1();
	a.method2();
	return 0;
}
