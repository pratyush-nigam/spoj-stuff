ass Solution {
	public:
		int minDistance(string word1, string word2) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i,j,m,n;
			m = word1.size();
			n = word2.size();
			int a[m+1][n+1];
			a[0][0]=0;
			for(i=1;i<=n;i++)
				a[0][i]=i;
			for(j=1;j<=m;j++)
				a[j][0]=j;
			for(i=1;i<=m;i++)
			{
				for(j=1;j<=n;j++)
				{
					a[i][j] = min( a[i-1][j-1]+(word1[i-1]!=word2[j-1]) , min( a[i-1][j]+1 , a[i][j-1]+1 ) );
				}
			}
			return a[m][n];
		}
};
