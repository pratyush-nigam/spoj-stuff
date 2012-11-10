class Solution {
	public:
		vector<int> twoSum(vector<int> &numbers, int target) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i=0,j=numbers.size()-1;
			vector<pair<int,int> > p;
			for(i=0;i<numbers.size();i++)
				p.push_back(make_pair(numbers[i],i));
			std::sort(p.begin(),p.end());
			vector<int> v;
			i=0;
			while(i<j)
			{
				if(p[i].first+p[j].first == target)
				{
					v.push_back(p[i].second+1);
					v.push_back(p[j].second+1);
					i++;
					j--;

				}
				else if(p[i].first+p[j].first < target)
					i++;
				else
					j--;
			}
			std::sort(v.begin(),v.end());
			return v;
		}
};
