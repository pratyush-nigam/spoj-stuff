class Solution {
	public:
		bool canInterleave(string s1,string s2,string s3,int i, int j,int k)
		{
			if(k==s3.size())
			{
				if(i==s1.size() && j==s2.size())
					return true;
				else
					return false;
			}

			if(s1[i]==s2[j])
			{
				if(s1[i]==s3[k])
					return (canInterleave(s1,s2,s3,i+1,j,k+1) || canInterleave(s1,s2,s3,i,j+1,k+1));
				return false;
			}
			else if(s1[i]==s3[k])
				return canInterleave(s1,s2,s3,i+1,j,k+1);
			else if(s2[j]==s3[k])
				return canInterleave(s1,s2,s3,i,j+1,k+1);
			return false;
		}
		bool isInterleave(string s1, string s2, string s3) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function    
			return canInterleave(s1, s2,s3,0,0,0);
		}
};
