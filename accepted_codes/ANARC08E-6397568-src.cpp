#include<iostream>
using namespace std;
int getevaluate(int sum,int a)
{
	long long int temp=1;
	long long int tt=1;
	for(int i=a+1;i<=sum;i++)
	{
		temp=temp*i;
	}
	for(int j=1;j<=(sum-a);j++)
		tt=tt*j;
	temp=temp/tt;
	return temp;
}
int main()
{
	while(1)
	{
		int a,b;
		cin>>a>>b;
		if(a==-1 && b==-1)
			break;
		if(a==0 && b==0)
			cout<<a<<"+"<<b<<"!="<<a+b<<endl;
		else 
		{
			if((a+b)==getevaluate(a+b,a))
				cout<<a<<"+"<<b<<"="<<a+b<<endl;
			else
				cout<<a<<"+"<<b<<"!="<<a+b<<endl;
		}
	}
}
