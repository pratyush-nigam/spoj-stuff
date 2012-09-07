#include<cstdio>
#include<vector>
using namespace std;
/*int ks(vector<pair<int,int> > v, int i,int wtsum, int sum,int m,int n)
{
	if(i==n || wtsum==m)
		return sum;
	int j=0,k=0;
	if(m >= wtsum + v[i].first)
		j = max(ks(v,i+1,wtsum+v[i].first,sum+v[i].second,m,n),ks(v,i+1,wtsum,sum,m,n));
	else
		k = ks(v,i+1,wtsum,sum,m,n);
	k = max(k,j);
      	return 	k;
}*/
int a[2000][2000];

int main()
{
	int n,s,i,j;
	scanf("%d%d",&s,&n);
	vector<pair<int,int> > v;
	for(i=0;i<n;i++)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		v.push_back(make_pair(x,y));
	}
	//int y = ks(v,0,0,0,s,n);
	for(int i = 1; i <= s; i++){
		for(int j = 0; j < n; j++){
			if(j > 0){
				a[j][i] = a[j-1][i];
				if (v[j].first <= i)
					a[j][i] = max(a[j][i], a[j-1][i-v[j].first]+v[j].second);
			}
			else{
				a[j][i] = 0;
				if(v[j].first <= i)
					a[j][i] = max(a[j][i], v[j].second);
			}
		}
	}
	for(int i = 1; i <= s; i++){
		for(int j = 0; j < n; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("%d\n",a[n-1][s]);
	return 0;
}
