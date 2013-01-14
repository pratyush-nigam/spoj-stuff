class Solution {
	public:
		map<vector<int>,int > m;
		vector<vector<int> > dp(int i,vector<int> s,vector<int> v,vector<vector<int> > t)
		{
			if(i==s.size())
			{
				int j,k;
				for(j=0;j<t.size();j++)
				{
					if(v.size()==t[j].size())
					{
						int flag = 1;
						for(k=0;k<t[j].size() && k<v.size();k++)
						{
							if(v[k]!=t[j][k])
							{
								flag = 0;
								break;
							}
						}
						if(flag==1)
							return t;

					}
				}
				t.push_back(v);
				return t;
			}
			vector<int> y;
			y = v;
			y.push_back(s[i]);
			t = dp(i+1,s,v,t);
			t = dp(i+1,s,y,t);
			return t;
		}
		vector<vector<int> > subsetsWithDup(vector<int> &S) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			vector<vector<int> > v;
			vector<int> y;
			//v.push_back(y);
			std::sort(S.begin(),S.end());
			return dp(0,S,y,v);
		}
};
