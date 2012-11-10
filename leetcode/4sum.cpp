class Solution {
	public:
		vector<vector<int> > fourSum(vector<int> &num, int target) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			vector<pair<int, pair<int,int> > > t;
			int i,j;
			for(i=0;i<num.size();i++)
			{
				for(j=i+1;j<num.size();j++)
					t.push_back(make_pair(num[i]+num[j],make_pair(i,j)));
			}
			std::sort(t.begin(),t.end());
			i=0;
			j = t.size() - 1;
			vector<vector<int> > v;
			set<vector<int> > s;
			for(i=0;i<t.size();i++)
			{
				for(j=i+1;j<t.size();j++){
					if(t[i].first+t[j].first == target)
					{
						if(t[i].second.first != t[j].second.first && t[i].second.first != t[j].second.second && t[i].second.second != t[j].second.first && t[i].second.second != t[j].second.second)
						{
							vector<int> y;
							y.push_back(num[t[i].second.first]);
							y.push_back(num[t[i].second.second]);
							y.push_back(num[t[j].second.first]);
							y.push_back(num[t[j].second.second]);
							std::sort(y.begin(),y.end());
							if(s.find(y)==s.end()){
								v.push_back(y);
								s.insert(y);
							}
						}
					}
				}
			}
			//std::sort(v.begin(),v.end());
			return v;
		}
};
