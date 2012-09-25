#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;


int dist(int x1,int x2,int y1,int y2)
{
	return (int)sqrt(((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2)));
}

int dp(int w, int h,int i, int j, vector<vector<int> > a,int count)
{
	printf("%d %d \n",i,j);
	if(i==h)
		return count;
	
	else
	{
		int f1,f2,f3,f4;
		f1=f2=f3=f4=1;
		if(i-2 >= 0)
		{
			if(a[i-2][j]==1)
				f1=0;
		}
		if(j-2 >= 0)
		{
			if(a[i][j-2]==1)
				f2=0;
		}
		if(i+2 < h)
		{
			if(a[i+2][j]==1)
				f3=0;
		}
		if(j+2 < w)
		{
			if(a[i][j+2]==1)
				f4=0;
		}
		
			
		if(f1&&f2&&f3&&f4)
		{
			int i1=i,j1=j+1;
			if(i==h-1 && j==w-1)
				i1 = h;
			else if(j==w-1){
				i1 = i+1;
				j1= 0;
			}
			else
				j1 = j+1; 
			int d1 = dp(w,h,i1,j1,a,count);
			a[i][j]=1;
			int d2 = dp(w,h,i1,j1,a,count+1);
			return max(d1,d2);
		}
		else
		{
			int i1=i,j1=j+1;
			if(i==h-1 && j==w-1)
				i1 = h;
			else if(j==w-1){
				i1 = i+1;
				j1= 0;
			}
			else
				j1 = j+1; 
			int d1 = dp(w,h,i1,j1,a,count);
			return d1;
		}
	}
	
}

int maxStones(int width, int height)
{
	int i,j;
	vector<vector <int> > a;
	vector<int> y;
	for(i=0;i<height;i++)
	{
		for(j=0;j<width;j++)
			y.push_back(0);
		a.push_back(y);		
	}
	return dp(width,height,0,0,a,0);
}

int main()
{
	printf("%d\n",maxStones(8,5));
	return 0;
}
