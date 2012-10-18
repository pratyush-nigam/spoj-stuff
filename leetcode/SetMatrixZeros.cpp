class Solution {
	public:
		void setZeroes(vector<vector<int> > &matrix) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i,j,n=matrix.size(),m=matrix[0].size();
			int fr=1,fc=1;
			for(i=0;i<n;i++)
			{
				if(matrix[i][0]==0)
				{
					fc=0;
					break;
				}
			}
			for(i=0;i<m;i++)
			{
				if(matrix[0][i]==0)
				{
					fr=0;
					break;
				}
			}

			for(i=1;i<n;i++)
			{
				for(j=1;j<m;j++)
				{
					if(matrix[i][j]==0)
						matrix[i][0]=matrix[0][j]=0;
				}
			}
			for(i=1;i<n;i++)
			{
				for(j=1;j<m;j++)
				{
					if(matrix[i][0]==0 || matrix[0][j]==0)
						matrix[i][j]=0;
				}
			}
			if(fc==0)
				for(i=0;i<n;i++)
					matrix[i][0]=0;
			if(fr==0)
				for(i=0;i<m;i++)
					matrix[0][i]=0;
			return;
		}
};
