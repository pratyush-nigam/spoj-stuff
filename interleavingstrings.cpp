class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function    
        int i=0,j=0,flag=1;
        while(i<s1.size() && j<s3.size())
        {
            if(s1[i]==s3[j])
                i++;
            j++;
        }
        if(i!=s1.size())
            return false;
        i=j=0;
        while(i<s2.size() && j<s3.size())
        {
            if(s2[i]==s3[j])
                i++;
            j++;
        }
        if(i!=s2.size())
            return false;    
        if(s1.size()+s2.size() == s3.size())    
            return true;
        else
            return false;
    }
};
