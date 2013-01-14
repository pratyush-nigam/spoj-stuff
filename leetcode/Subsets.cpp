class Solution {
	public:
		vector<vector<int> > dp(int i,vector<int> s,vector<int> v,vector<vector<int> > t)
		{
			if(i==s.size())
			{
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
		vector<vector<int> > subsets(vector<int> &S) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			vector<vector<int> > v;
			vector<int> y;
			std::sort(S.begin(),S.end());
			return dp(0,S,y,v);
		}
};
