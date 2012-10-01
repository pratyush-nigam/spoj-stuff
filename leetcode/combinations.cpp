class Solution {
	public:

		vector<vector <int> > dp(int j,int count, int k, int n, vector<int> v, vector<vector<int> > v1)
		{
			if(count==k)
			{
				v1.push_back(v);
				return v1;
			}
			if(j>n || count > k)
				return v1;
			int i;
			for(i=j;i<=n;i++)
			{
				vector<int> y;
				y = v;
				y.push_back(i);
				v1 = dp(i+1,count+1,k,n,y,v1);
				v1 = dp(i+1,count,k,n,v,v1);
				return v1;
			}
		}

		vector<vector<int> > combine(int n, int k) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			vector<int> v;
			vector<vector<int> > v1;
			return dp(1,0,k,n,v,v1);
		}
};
