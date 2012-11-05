#include<cstdio>
using namespace std;
int main()
{
	int a[6]={1,2,3,1,5,6};
	int x=0;
	for(int i=0;i<6;i++)
	{
		x = x ^ a[i] ^ i;
		if(x==0){
			printf("Duplicate exists\n");
			return 0;
		}
		printf("%d\n",x);
	}
	printf("Duplicate doesn't exist\n");
	return 0;
}
