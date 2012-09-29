#include<iostream>
#include<vector>
#include<cstdio>
#include<map>
using namespace std;

long long merge(int a[],int l,int mid,int h,int temp[]){
	int i,j,k;

	long long count=0;
	j = mid+1;
	for(k=l;k<=mid;k++){
		while(j<=h){
			if(a[k]>a[j])
				j++;
			else
				break;
		}
		count+=j-(mid+1);
	}

	i = l;
	j = mid+1;
	k = l;
	while(i<=mid&&j<=h){
		if(a[i]<a[j]){
			temp[k] = a[i];
			i++;k++;
		}
		else
		{
			temp[k] = a[j];
			j++;
			k++;
		}
	}
	while(i<=mid){
		temp[k] = a[i];
		i++;k++;
	}
	while(j<=h){
		temp[k] =  a[j];
		j++;k++;
	}
	for(k=l;k<=h;k++)
		a[k] = temp[k];
	return count;
}
long long mergesort(int a[],int l,int h,int temp[]){
	if(l==h)
		return 0;
	int mid;
	mid = (l+h)/2;
	long long lc,rc,mc;
	lc = mergesort(a,l,mid,temp);
	rc = mergesort(a,mid+1,h,temp);
	mc = merge(a,l,mid,h,temp);
	return lc+rc+mc;
}

int minSwaps(int a[],int b[],int n)
{
	map<int,int> m;
	int p[n],i;
	for (i=0;i<n;i++)
		    m[a[i]] = i;
	for(i=0;i<n;i++)
		    p[i] = m[b[i]];
	int temp[n];
	return mergesort(p,0,n-1,temp);
}

int main()
{
	int g;
	scanf("%d",&g);
	while(g--)
	{
		int n,i;
		scanf("%d",&n);
		int a[n],b[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		printf("%d\n",minSwaps(a,b,n));
		
	}
	return 0;
}
