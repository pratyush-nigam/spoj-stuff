#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t>0)
	{
		char s[2500],s2[2500];
		scanf("%s",s);
		strcpy(s2,s);
		int i=0,p=0,h=0,n,p1=0,h1=0;
		n=strlen(s);
		while(i<n)
		{
			if((s[i]=='M' && s[i+1]=='W') || (s[i] == 'W' && s[i+1]=='M'))
			{
				s[i] = s[i+1] = 'A';
				p++;
				
			}
			i++;
		}
		i = i-1;
		while(i>=0)
		{
			if((s2[i]=='M' && s2[i-1]=='W') || (s2[i]=='W' && s2[i-1]=='M'))
			{
				s2[i]=s2[i-1]='A';
				p1++;
			}
			i--;
		}
		if(p1>p)
		{
			p = p1;
			for(i=0;i<n;i++)
			{
				if((s2[i]=='M' && s2[i+1] == 'M')||(s2[i]=='W' && s2[i+1]=='W'))
				{
					h1++;
					s2[i]=s2[i+1]='A';
				}
			}
		}	
		else
		{
			for(i=0;i<n;i++)
			{
				if((s[i]=='M' && s[i+1] == 'M')||(s[i]=='W' && s[i+1]=='W'))
				{
					h++;
					s[i]=s[i+1]='A';
				}
			}
		}
		if(h1>h)
			h = h1;
		printf("%d %d\n",p,h);
		t--;
	}
	return 0;
}
