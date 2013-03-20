class Solution {
public:
    string minWindow(string S, string T) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int has[256] = {0};
        int need[256] = {0};
        int i,n=T.size(),m=S.size();
        if(m<n)
            return "";
        for(i=0;i<n;i++)
            need[int(T[i])]++;
        i=0;
        int count = 0,b=0;
        string res="";
        int mn = INT_MAX;
        while(i<m)
        {
            if(need[int(S[i])] > 0)
            {
                has[int(S[i])]++;
                if(has[int(S[i])] <= need[int(S[i])])
                    count++;
                if(count == n)
                {
                    while(need[int(S[b])]==0 || need[int(S[b])]<has[int(S[b])])
                    {
                        if(need[int(S[b])]<has[int(S[b])])
                            has[int(S[b])]--;
                        b++;
                    }
                    if(mn > i-b+1)
                    {
                        mn = i-b+1;
                        res = S.substr(b,i-b+1);                        
                    }
                }
            }
            i++;
        }
        //if(flag==1)
        return res;
    }
};
