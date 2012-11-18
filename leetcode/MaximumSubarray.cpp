class Solution {
	public:
		int maxSubArray(int A[], int n) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i,c=0,m=INT_MIN,sum=0,max=INT_MIN;
			for(i=0;i<n;i++)
			{
				if(A[i]<0)
					c++;
				if(A[i]>m)
					m = A[i];                
			}
			if(c==n)
				return m;
			for(i=0;i<n;i++)
			{
				if(sum+A[i]>0)
					sum+=A[i];
				else
					sum=0;
				if(sum > max)
					max = sum;
			}
			return max;								        }
};
