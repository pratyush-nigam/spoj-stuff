class Solution {
	public:
		vector<int> findSubstring(string S, vector<string> &L) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i;
			map<string,int> a,b;
			int n=L[0].size(),m=L.size();
			for(i=0;i<m;i++)
			{
				a[L[i]]++;
			}
			vector<int> v;
			for(i=0;i<(int)S.size() - (n*m)+1;i++)
			{
				//string y = S.substr(i,n);
				//b[y]++;
				int j,flg=1;
				for(j=0;j<m;j++)
				{
					string y = S.substr(j*n+i,n);
					if(a.find(y)==a.end())
					{
						flg=0;
						break;
					}    
					b[y]++;
					if(b[y]>a[y])
					{
						flg=0;
						break;
					}
				}
				if(flg==1)
					v.push_back(i);
				b.clear();
			}
			return v;
		}
};
