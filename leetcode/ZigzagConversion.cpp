class Solution {
	public:
		string convert(string s, int nRows) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			if(nRows==1)
				return s;
			int i,e=nRows;
			string res="";
			vector<string> v;
			for(i=0;i<nRows;i++)
				v.push_back("");
			i=0;
			while(i<s.size())
			{
				if(e==nRows)
				{
					int j=0;
					while(j<nRows)
					{
						v[j] = v[j] + s[i];
						j++;
						i++;
						if(i==s.size())
							break;
					}
					e = e - 2;   
				}
				else
				{
					v[e] = v[e] + s[i];
					i++;
					e--;

				}
				if(e==0)
					e = nRows;
			}
			for(i=0;i<nRows;i++)
				res = res + v[i];
			return res;
		}
};
