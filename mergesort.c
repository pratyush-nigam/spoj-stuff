#include<stdio.h>
int count;
int size;

void sort(int arr[],int low,int mid,int high)
{
 int i,j,k,l,b[size];
 l=low;
 i=low;
 j=mid+1;
 while((l<=mid)&&(j<=high))
   {
    if(arr[l]<=arr[j])
      {
       b[i]=arr[l];
       l++;
      }
    else
      {
       printf("%d %d\n",arr[j],arr[l]);
       count++;
       b[i]=arr[j];
       j++;
      }
    i++;
   }
 if(l>mid)
   {
    for(k=j;k<=high;k++)
       {
        b[i]=arr[k];
        i++;
	//count++;
       }
   }
 else
   {
    for(k=l;k<=mid;k++)
       {
       	printf("%d\n",arr[k]);
	count++;
        b[i]=arr[k];
        i++;
       }
   }
 for(k=low;k<=high;k++)
    {
     arr[k]=b[k];
    }
}

void partition(int arr[],int low,int high)
{
 int mid;
 if(low<high)
   {
    mid=(low+high)/2;
    partition(arr,low,mid);
    partition(arr,mid+1,high);
    sort(arr,low,mid,high);
   }
}


int main()
{
 int arr[20];
 int t;
 //printf("Enter number of data:");
 scanf("%d",&t);
 while(t>0)
 {
	int n,i;
	scanf("%d",&n);
	count = 0;
	size = n;
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
 	partition(arr,0,n-1);
	//for(i=0;i<n;i++)
	//	printf("%d ",arr[i]);
	printf("%d\n",count);
 	t--;
 }
 return 0;
}
