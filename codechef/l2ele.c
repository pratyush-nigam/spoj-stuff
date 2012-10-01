#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkbalanced(int l,int r,char s[])
{
	int f=0,e=0,g,k;
	int fo[r-l+1],se[r-l+1];
	fo[l]=0;
	se[r]=0;
	if(s[r]=='7')
		se[r] = 1;
	for(g=l;g<=r;g++)
	{
		if(s[g-1]=='4')
			fo[g] = fo[g-1] + 1;
		if(r-g-1 >= l && s[r-g-1]=='7')
			se[r-g-1] = se[r-g] + 1;
	/*	f=e=0;
		for(k=l;k<=r;k++)
		{
			if(s[k]=='4' && k<g)
				f++;
			if(s[k]=='7' && k>=g)
				e++;
		}
		if(f==e)
			return 1;*/
	}
		if(s[g-1]=='4')
			fo[g] = fo[g-1] + 1;
	
	for(g=l;g<=r;g++)
		if(fo[g]==se[g])
			return 1;
	return 0;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t)
	{
		char s[100005];
		scanf("%s",s);
		int n = strlen(s),i,j,k,count=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<=i;j++)
			{
				if(checkbalanced(j,i,s) == 1)
					count++;
			}
		}
		printf("%d\n",count);
		t--;
	}
	return 0;
}
