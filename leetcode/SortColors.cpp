class Solution {
	public:
		void sortColors(int A[], int n) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int a=0,b=0,c=0,i;
			for(i=0;i<n;i++)
			{
				if(A[i]==0)
					a++;
				else if(A[i]==1)
					b++;
				else if(A[i]==2)
					c++;
			}
			for(i=0;i<n;i++)
			{
				if(a>0)
				{
					A[i]=0;
					a--;
				}
				else if(b>0)
				{
					A[i]=1;
					b--;
				}
				else if(c>0)
				{
					A[i]=2;
					c--;
				}
			}
			return;
		}
};
