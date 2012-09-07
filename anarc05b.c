#include<stdio.h>
#include<stdlib.h>

typedef struct point
{
	int num;
	int ind1;
	int ind2;
}point;

int comp(const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	int n1,n2,i,j;
	while(1)
	{
		scanf("%d",&n1);
		int a[n1];
		if(n1==0)
			break;
		for(i=0;i<n1;i++)
			scanf("%d",&a[i]);
		scanf("%d",&n2);
		int b[n2];
		for(i=0;i<n2;i++)
			scanf("%d",&b[i]);
		int count=0,c;
		if(n1<n2)
			c=n1;
		else
			c=n2;
		point x[c];
		for(i=0;i<n1;i++)
		{
			int key = a[i],l=-1,r=n2-1,*flag,mid;
			/*while(l<r)
			{
				mid = l + (r-l)/2;
				if(key == b[mid]){
					flag=1;
					break;
				}
				else if(key < b[mid])
					r=mid-1;
				else
					l=mid+1;
				//printf("mid = %d\n",mid);
			}*/
			flag = bsearch(&key,b,n2,sizeof(int),comp);
			if(flag!=NULL)
			{
				x[count].num=*flag;
				count++;
			}
		}
		//for(i=0;i<count;i++)
		//	printf("%d %d %d\n",x[i].num,x[i].ind1,x[i].ind2);
		//printf("\n");
		//printf("count = %d\n",count);
		i=j=0;
		int sum = 0,s2,s1,k=0;
		while(k<count)
		{
			s1=s2=0;
			while(a[i]!=x[k].num)
			{
				s1+=a[i];
				i++;
			}
			while(b[j]!=x[k].num)
			{
				s2+=b[j];
				j++;	
			}
			if(s1>s2)
				sum+=s1;
			else
				sum+=s2;
			//printf("%d %d %d\n",s1,s2,sum);
			k++;
		}
		s1=s2=0;
		while(i<n1)
		{
			s1+=a[i];
			i++;
		}
		while(j<n2)
		{
			s2+=b[j];
			j++;	
		}
		if(s1>s2)
			sum+=s1;
		else
			sum+=s2;
		//printf("%d %d %d\n",s1,s2,sum);
		printf("%d\n",sum);
	}
	
	return 0;
}
