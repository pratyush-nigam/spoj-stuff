class Solution {
	public:
		bool check33(int s1, int s2,vector<vector<char> > board)
		{
			int i,j;
			int a[10] = {0};
			for(i=s1;i<s1+3;i++)
			{
				for(j=s2;j<s2+3;j++)
				{
					if('1' <= board[i][j] && board[i][j] <= '9')
					{
						if(a[board[i][j]-'0']==1)
							return 0;
						a[board[i][j]-'0'] = 1;
					}
				}
			}
			return 1;
		}
		bool isValidSudoku(vector<vector<char> > &board) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i,j;
			for(i=0;i<9;i++)
			{
				int a[10]={0};
				for(j=0;j<9;j++)
				{
					if('1' <= board[i][j] && board[i][j] <= '9')
					{
						if(a[board[i][j]-'0']==1)
							return 0;
						a[board[i][j]-'0'] = 1;
					}
				}
			}
			for(j=0;j<9;j++)
			{
				int a[10]={0};
				for(i=0;i<9;i++)
				{
					if('1' <= board[i][j] && board[i][j] <= '9')
					{
						if(a[board[i][j]-'0']==1)
							return 0;
						a[board[i][j]-'0'] = 1;
					}
				}
			}
			for(i=0;i<9;i+=3){
				for(j=0;j<9;j+=3)
				{
					if(!check33(i,j,board))
						return 0;
				}
			}
			return 1;
		}
};
