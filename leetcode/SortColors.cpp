class Solution {
	public:
		void sortColors(int A[], int n) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int l=0,m=0,h=n-1;
			while(m<=h)
			{
				if(A[m]==0)
				{
					A[m++] = A[l];
					A[l++]=0;
				}
				else if(A[m]==1)
					m++;
				else if(A[m]==2)
				{
					A[m] = A[h];
					A[h--]=2;
				}
			}
			return;
		}
};
