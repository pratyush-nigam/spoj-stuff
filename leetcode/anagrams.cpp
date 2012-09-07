class Solution {
	public:
		vector<string> anagrams(vector<string> &strs) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			map<pair<int,int>, vector<int> > m;
			map<pair<int,int>, vector<int> >::iterator iter;
			vector<string> a;
			int i,j;
			for(i=0;i<strs.size();i++)
			{
				int sum = 0, prod=1;

				for(j=0;j<strs[i].size();j++)
				{
					sum = sum + (strs[i][j] - 'a') + 1;
					prod = prod * ((strs[i][j]-'a') + 2);
				}
				pair<int,int> p;
				p.first = sum;
				p.second = prod;
				m[p].push_back(i);
			}
			for(iter = m.begin();iter!=m.end();iter++)
			{
				if(m[iter->first].size() > 1)
				{
					for(i=0;i<m[iter->first].size();i++)
						a.push_back(strs[m[iter->first][i]]);
				}
			}
			return a;
		}
};
