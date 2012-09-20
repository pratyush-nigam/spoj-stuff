class Solution {
	public:
		vector<vector<int> >dp(vector<int> c, int t, vector<int> v, vector<vector<int> > p, int sum,int k)
		{
			if(sum == t)
			{
				p.push_back(v);
				return p;
			}
			else if(sum > t)
				return p;
			//vector<vector<int> > y;
			int i;
			for(i= k;i<c.size();i++)
			{
				v.push_back(c[i]); 
				p=dp(c,t,v,p,sum+c[i],i);
				v.pop_back();
			}
			return p;
		}
		vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			sort(candidates.begin(),candidates.end());
			vector<int> v;
			vector<vector<int> > p;
			return dp(candidates,target,v,p,0,0);
		}
};
