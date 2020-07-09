#include <iostream>

using namespace std;

class Animal
{
	public:
		virtual void Move()
		{
			cout << "Animals move" << endl;
		}
};

class Dog : public Animal
{
	public:
		void Move()
		{
			cout << "The dog walks on four legs" << endl;
		}
};

class Whale : public Animal
{
	public:
		void Move()
		{
			cout << "The whale swims" << endl;
		}
};

int main()
{
	Animal *a= new Animal();
	Animal *d= new Dog();
	Animal *w=new Whale();

	a->Move();
	d->Move();
	w->Move();
}
