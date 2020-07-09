#include <iostream>

using namespace std;

class Animal
{
	public:
		virtual void Move() =0;
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
	static User *u;
	public:
	~User()
	{
		if(anim)
		{
			delete[] anim;
			anim = NULL;
		}
	}

	Animal *getAnimal(int t)
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
		return anim;
	}
	static User *initialize()
	{
		if(!u)
			u= new User;
		return u;
	}
	private:
	Animal *anim;
};

User *User::u = 0;

int main()
{
	Animal *d= User::initialize()->getAnimal(1);
	Animal *w= User::initialize()->getAnimal(2);
	
	d->Move();
	w->Move();
}
