#include<cstdio>
#include<string>
using namespace std;
class Solution {
	public:
		bool isInterleave(string s1, string s2, string s3) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function    
			int i=0;
			for(i<s3.size())
			{
				/*if(s1[0]==s3[i] && s2[0]==s3[i])
				{
					int j=0;
					while(i+j<s3.size() && s1[j]==s3[i+j] && s2[j]==s3[i+j])
					{
						j++;
					}
					if(s1[j]==s3[i+j])
					{
						s1.erase(s1.begin(),s1.begin()+j);
					}
					else if(s2[j]==s3[i+j])
					{
						s2.erase(s2.begin(),s2.begin()+j);
					}
					i+=j;
				}*/
			 if(s1[0]==s3[i]){
					s1.erase(s1.begin());
					i++;
				}
				else if(s2[0]==s3[i]){
					s2.erase(s2.begin());
					i++;
				}
				else
					return false;
			}
			if(s1.size() ==0 && s2.size()==0)
				return true;
			else
				return false;
		}
};
