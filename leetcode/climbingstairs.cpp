class Solution {
	public:
		/*int dp(int n)
		  {
		  if(n==1)
		  return 1;
		  if(n==2)
		  return 2;
		  int count = 0;
		  count = count + dp(n-1)+dp(n-2);
		  return count;
		  }*/
		int climbStairs(int n) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int a[n+1],i;
			a[1]=1;
			a[2]=2;
			for(i=3;i<=n;i++)
				a[i] = a[i-1] + a[i-2];
			return a[n];
		}
};
