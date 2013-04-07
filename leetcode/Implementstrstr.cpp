class Solution {
public:
    vector<int> clps(char *needle, int n)
    {
        int i = 1,len = 0;
        vector<int> l;
        l.push_back(0);
        while(i<n)
        {
            if(needle[i]==needle[len])
            {
                len++;
                l.push_back(len);
                i++;
            }
            else
            {
                if(len==0)
                {
                    l.push_back(0);
                    i++;
                }
                else
                {
                    len = l[len-1];
                }
            }
        }
        return l;
    }
    char *strStr(char *haystack, char *needle) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int m = strlen(needle);
        int n = strlen(haystack);
        if(m>n)
            return NULL;
        if(n==0)
            return haystack;
        
        vector<int> l = clps(needle,m);
        int i=0,j=0;
        while(i<n)
        {
            if(needle[j] == haystack[i])
            {
                j++;
                i++;
            }
            if(j==m)
                return haystack+(i-j);
            else if(haystack[i]!=needle[j])
            {
                if(j!=0)
                    j = l[j-1];
                else
                    i++;
            }
        }
        return NULL;
    }
};
