#include<cstdio>
using namespace std;

int main()
{
	int a[7] = {1,2,4,4,3,2,3};
	int i,n=7;
	int b = a[0];
	for(i=1;i<n;i++)
	{
		b = b ^ a[i];
		//printf("%d\n",b);
		//if(b==0){
		//	printf("%d\n",a[i]);
		//	return 0;
		//}
	}
	printf("%d\n",b);
	return 0;
}
