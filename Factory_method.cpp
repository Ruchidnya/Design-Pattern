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

class User
{
	public:
	User(int t)
	{
		if(t==1)
		{
			anim = new Dog();
		}
		else if(t==2)
		{
			anim = new Whale();
		}
		else
		{
			anim=NULL;
		}
	}
	~User()
	{
		if(anim)
		{
			delete[] anim;
			anim = NULL;
		}
	}

	Animal *getAnimal()
	{
		return anim;
	}
	private:
	Animal *anim;
};

int main()
{
	User *u1 = new User(1);
	User *u2 = new User(2);
	Animal *d= u1->getAnimal();
	Animal *w= u2->getAnimal();
	
	d->Move();
	w->Move();
}
