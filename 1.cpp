#include<iostream>
#include<limits>
#include<cmath>
using namespace std;
int main()                              
{
	int N=0;
	cout<<"input N"<<endl;
	cin>>N;
	int A[N];
	for(int i=0;i<N;++i)
	{
		cin>>A[i];
	}

	int cummulative[N];
	cummulative[0] = A[0];
	for(int i=1;i<N;++i)
	{
		cummulative[i] = cummulative[i-1]+A[i];
	}

	int min=std::numeric_limits<int>::max();
	int minI = -1;
	for(int i=0;i<N;++i)
	{
		int objective = abs(2*cummulative[i] - cummulative[N-1]);
		if(objective <min)
		{
			min=objective;
			minI = i;
		}
	}
	cout<<"Split"<<endl;
	cout<<"{";

	for(int i=0;i<N;i++)
	{
		cout<<A[i];
		if(i==minI) cout<<"},{";
	}
	cout<<"}"<<endl<<"With Min = "<<min<<endl;
}                    
