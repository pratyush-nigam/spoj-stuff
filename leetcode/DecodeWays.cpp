class Solution {
	public:
		set<string> v;
		int dp(map<int,char> m,string s,string y)
		{
			if(s.size()==0){
				if(v.find(y)!=v.end())
					return 0;
				else
				{
					v.insert(y);
					return 1;
				}
			}
			int num1,num2;
			num1 = s[0]-'0';
			int sum = 0;
			if(m.find(num1)!=m.end())
				sum = sum + dp(m,s.substr(1),y+m[num1]);
			if(s.size()>1 && s[0]!='0') 
			{
				num2 = (s[0]-'0')*10 + (s[1]-'0');
				if(m.find(num2)!=m.end())
					sum = sum + dp(m,s.substr(2),y+m[num2]);
			}
			return sum;        
		}
		int numDecodings(string s) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			if(s.size()==0)
				return 0;
			map<int,char> m;
			int i;
			for(i=1;i<=26;i++){
				m[i] = (char)('A'+(i-1));
			}
			return dp(m,s,"");
		}
};
