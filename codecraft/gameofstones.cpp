#include<cstdio>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		if(n%2==1 || n==0)
			printf("Powerrr!\n");
		else
			printf("Andhera Kayam Rahe\n");
	}
	return 0;
}
