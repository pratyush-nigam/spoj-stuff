#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		if(n%5==1)
			cout<< "Bane" << endl;
		else
			cout<< "Joker" << endl;
	}
}
