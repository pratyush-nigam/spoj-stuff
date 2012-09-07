#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//#include <iostream>
//#include <cstdlib>

//using namespace std;
int MAX=2147483647;
void sieve(int *p, int sz)
{
int i,j;
for( i=0; i<=sz; i++) p[i]=0;
int l=(int)sqrt(sz);
for( i=2; i<=l; i++) if(!p[i])
for(j=i*2; j<=sz; j+=i) p[j]=1;
return;
}

//#define MAX= INT_MAX

int isp[1000001], d[1000001] , Value[1000001];

int main(){
int sz=(int)sqrt(MAX), cnt;
int prime[sz+1];
sieve(prime, sz);
while(1)
{
int m, n,i,j;
scanf("%d %d", &m, &n);
if(n==0&&m==0) break;

for(i=0; i<=n-m; i++) isp[i]=0;
for(i=0; i<=n-m; i++) d[i]=0;
memset(Value,-1,(n-m+5)*sizeof(int));

int l=(int)sqrt(n);
for( i=2; i<=l; i++)
{
if(!prime[i])
{
for(j=((m+i-1)/i)*i; j<=n; j+=i)
{
d[j-m]++;
if((j%(i*i)==0)||((j-1)%(i-1)!=0))
isp[j-m]=1;
if(Value[j-m] == -1)
{
Value[j-m] = j/i;
}
else
Value[j-m] = Value[j-m]/i;
}
}
//printf("Chak De Phatte\n");
}
if(m==1) isp[0]=1; cnt=0;
for( i=0; i<=n-m; i++)
{
//if((!isp[i])&&(d[i]>2))
if(!isp[i] && Value[i]!=0)
{
if(((Value[i] == 1 || Value[i] == -1) && d[i]>2) || (d[i]>=2 && (m+i-1)%(Value[i]-1)==0))
{
cnt++; printf("%d\n",m+i);
}
}
}
if(cnt==0) printf("none\n");
}
return 0;
}
