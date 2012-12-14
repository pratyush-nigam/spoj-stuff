class Solution {
	public:
		string countAndSay(int n) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			string v;
			v = "1";
			//std::reverse(v.begin(),v.end());
			int i = 1;
			while(i<n)
			{
				int k=0;
				string y;
				while(k<v.size())
				{
					int j = k;
					int c=0;
					char u;
					u = v[k];
					while(j<v.size() && v[j]==u)
					{
						j++;
						c++;
					}
					stringstream b;
					b << c;
					y = y + b.str() + u; 
					k = j;
				}
				v = y;
				i++;
			} 
			return v;
		}
};
