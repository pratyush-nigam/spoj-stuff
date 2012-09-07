#include <stdio.h>
#include <stdlib.h>

int comp(const int * a,const int * b) 
{
  if (*a==*b)
    return 0;
  else
    if (*a < *b)
        return -1;
     else
      return 1;
}

int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

  /* Sort the array */
  qsort(a,n,sizeof(int),comp);
  for (i=0;i<n;i++)
    printf("%d\n",a[i]) ;
  return 0;
}
