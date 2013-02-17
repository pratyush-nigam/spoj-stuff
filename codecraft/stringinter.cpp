#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

void printIlsRecur (char *str1, char *str2, char *iStr, int m, int n, int i,int &sum)
{
	if ( m==0 && n ==0 )
	{
		sum+=1;
		return;
	}
	if ( m != 0 )
	{
		iStr[i] = str1[0];
		printIlsRecur (str1 + 1, str2, iStr, m-1, n, i+1,sum);
	}
	if ( n != 0 )
	{
		iStr[i] = str2[0];
		printIlsRecur (str1, str2+1, iStr, m, n-1, i+1,sum);
	}
	return;
}

void printIls (char *str1, char *str2, int m, int n)
{
	char *iStr= (char*)malloc((m+n+1)*sizeof(char));
	iStr[m+n] = '\0';
	int sum=0;
	printIlsRecur (str1, str2, iStr, m, n,0, sum);
	printf("%d\n",sum);
	free(iStr); 
}

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		char str1[1000000];
		char str2[1000000];
		scanf("%s",str1);
		scanf("%s",str2);
		printIls (str1, str2, strlen(str1), strlen(str2));
	}
	return 0;
}
