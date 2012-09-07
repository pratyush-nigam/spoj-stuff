#include<stdio.h>
int main()
{
int n=0;
scanf("%d",&n);
while(n!=(-1))
{
int k,a[n],i,j,dif,sum=0,div,count=0,giv;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum+=a[i];
}
if((sum%n)==0)
{
div=sum/n;
for(i=0;i<n;i++)
{
if(a[i]<div)
{
dif=div-a[i];
for(j=0;j<n;j++)
{
if(i!=j)
{
if(a[j]>div)
{
giv=a[j]-div;

for(k=1;giv>0;k++)
{
a[i]++;
count++;
giv--;
a[j]--;
if(a[i]==div)
break;
}

}
}
if(a[i]==div)
break;
}
}
//for(dif=0;dif<n;dif++)
//printf("%d ",a[dif]);
//printf("\n");
}
printf("%d\n",count);
}
else
printf("-1\n");
scanf("%d",&n);
}
return 0;
}

