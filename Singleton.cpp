#include <iostream>

using namespace std;

class A
{
	static A *a;
	int x;
	A()
	{
		x=0;
	}
	public:
	int get()
	{
		return x;
	}

	void set(int num)
	{
		x=num;
	}

	static A *initialize()
	{
		if(!a)
		{
			a = new A;
		}
		return a;
	}
};

A *A::a=0;

void B()
{
	A::initialize()->set(1);
	cout << "In B the value of x is: " << A::initialize()->get() << endl;
}

void C()
{
	A::initialize()->set(2);
	cout << "In C the value of x is: " << A::initialize()->get() << endl;
}

int main()
{
	cout << "In main the value of x is: " << A::initialize()->get() << endl;
	B();
	C();
}







