class Solution {
	public:
		string multiply(string num1, string num2) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			vector<int> num;
			int i,j,n=num1.size(),m=num2.size();
			for(i=0;i<n+m;i++)
				num.push_back(0);
			for(i=n-1;i>=0;i--)
			{
				int t,carry=0;
				for(j=m-1;j>=0;j--)
				{
					t = num[i+j+1] + carry + ((num1[i]-'0')*(num2[j]-'0'));
					carry = t/10;
					num[i+j+1] = t%10;
				}
				num[i+j+1]=carry;
			}
			i = 0;
			while(num[i]==0 && i<n+m-1)
				i++;
			string s="";
			while(i<n+m)
				s.push_back((num[i++]+'0'));
			return s;
		}
};
