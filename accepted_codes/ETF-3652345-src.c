#include<stdio.h>
int fi(int n) 
{ 
       int result = n,i; 
       for(i=2;i*i <= n;i++) 
       { 
         if (n % i == 0) result -= result / i; 
         while (n % i == 0) n /= i; 
       } 
       if (n > 1) result -= result / n; 
       return result; 
} 

int main()
{
	int g,f;
	scanf("%d",&f);
	for(g=0;g<f;g++)
	{
		int num,i,count=1;
		scanf("%d",&num);
		/*count+=(num-(num/2)-1);
		for(i=2;i<=num/2;i++)
		{
			if(num%i!=0)
				count++;
		}*/
        count = fi(num);
		printf("%d\n",count);
	}
	return 0;
}
