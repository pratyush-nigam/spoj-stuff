#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char s[26];
int dp[26][26 * 9 + 1];

int main()
{
	int tc=1,n,i,j,sum,k;
	while(1)
	{
		scanf("%s",s);
		if(strcmp(s,"bye")==0)
			break;
		n = strlen(s);
		for(i = 0; i <= n * 9; ++i)
			dp[0][i] = 1;
		for(i = 1; i <= n; ++i)
			for(j = 0; j <= n * 9; ++j)
			{
				dp[i][j] = 0;
				sum = 0;
				for(k = i; k >= 1; --k)
				{
					sum += (s[k - 1] - '0');
					if(sum <= j)
					{

				//		if(i==2)
				//			printf("[%d][%d]\n",k-1,sum);
						dp[i][j] += dp[k - 1][sum];
					}
					else
						break;
				}
		}
		printf("%d. %d\n", tc++, dp[n][n * 9]);
//		for(i=0;i<=n;i++)
//		{
//			for(j=0;j<=9*n;j++)
//				printf("%d ",dp[i][j]);
//			printf("\n");
//		}
	}
	return 0;
}

