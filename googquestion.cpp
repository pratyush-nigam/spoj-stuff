#include<cstdio>
#include<iostream>
using namespace std;

class animal
{

	public:
	virtual void print()
	{
		cout<<"animal";
	}


};
class leopard: public animal
{

	public:
	void print()
	{
		cout<<"leapard";
	}


};
int main()
{


	animal *p= new leopard;


	p->print();

	return 0;
}
