class Solution {
	public:
		int sqrt(int x) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			if(x==1 || x==0)
				return x;
			long long int l=0,r=(x/2)+1,m;
			while(l+1<r)
			{
				m = l + (r-l)/2;
				if(m*m == x)
					return m;
				else if(m*m < x)
					l = m;
				else
					r = m;
			}
			return (int)l;
		}
};
