class Solution {
	public:
		int trap(int A[], int n) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i;
			int r[n],l[n];
			l[0]=A[0];
			for(i=1;i<n;i++)
				l[i]=max(l[i-1],A[i]);
			r[n-1]=A[n-1];
			for(i=n-2;i>=0;i--)
				r[i]=max(r[i+1],A[i]);
			int total=0;
			for(i=1;i<n-1;i++)
			{
				int low = min(l[i-1],r[i+1]);
				if(low>A[i])
					total+=(low-A[i]);
			}
			return total;
		}
};
