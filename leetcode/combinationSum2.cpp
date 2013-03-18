class Solution {
    public:
		vector<vector<int> >dp(vector<int> c, int t, vector<int> v, vector<vector<int> > p, int sum,int k)
		{
			if(sum == t)
			{
				int j,k;
				for(j=0;j<p.size();j++)
				{
					int flg =1;
					if(v.size() == p[j].size())
						for(k=0;k<p[j].size() && k<v.size();k++)
						{
							if(v[k]!=p[j][k])
							{
								flg = 0;
								break;
							}
						}
					else
						flg = 0;
					if(flg == 1)
						return p;
				}
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
				p=dp(c,t,v,p,sum+c[i],i+1);
				v.pop_back();
			}
			return p;
		}
		vector<vector<int> > combinationSum2(vector<int> &candidates, int target) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			sort(candidates.begin(),candidates.end());
			vector<int> v;
			vector<vector<int> > p;
			return dp(candidates,target,v,p,0,0);
		}
};
