class Solution {
	public:
		bool dfs(vector<vector<char> > board, string word,int i,int j,int l,set<pair<int,int> > s)
		{


			if(l == word.size())
				return true;
			if(i>=0 && i<board.size() && j<board[0].size() && j>=0 && board[i][j]==word[l] && s.find(make_pair(i,j))==s.end())
			{
				s.insert(make_pair(i,j));
				return dfs(board,word,i-1,j,l+1,s)||dfs(board,word,i+1,j,l+1,s)||dfs(board,word,i,j+1,l+1,s)||dfs(board,word,i,j-1,l+1,s);
			}
			else
				return false;
		}
		bool exist(vector<vector<char> > &board, string word) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i,j;
			bool c=false;
			for(i=0;i<board.size();i++)
			{
				for(j=0;j<board[i].size();j++)
				{
					if(board[i][j]==word[0])
					{
						set<pair<int,int> > s;
						if(dfs(board,word,i,j,0,s)==true)
							return true;
					}
				}
			}
			return false;
		}
};
