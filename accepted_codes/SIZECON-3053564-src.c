#include<stdio.h>
int main()
{
int g,f,num,sum=0;
scanf("%d",&f);
for(g=1;g<=f;g++)
{

scanf("%d",&num);
if(num>0)
sum+=num;
}
printf("%d\n",sum);
return 0;
}
