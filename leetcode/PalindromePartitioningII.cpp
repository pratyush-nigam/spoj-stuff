class Solution {
public:
    bool check(string s)
    {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
                return 0;
            i++;
            j--;
        }
        return 1;
    }
    int dp(string tt,vector<string> a,string prev, string s)
    {
        if(s.size()==0)
        {
            string y="";
            int n = a.size();
            for(int i=0;i<n;i++)
                y = y + a[i];
            if(y==tt)
                return n-1;
            else
                return INT_MAX;
        }    
        int res=INT_MAX; 
        string r = s;
        r.erase(r.begin());
        vector<string> tmp = a;
        string t="";
        t = t + s[0];
        
        
        prev = prev + s[0];
        if(prev.size() > 1 && check(prev))
        {
            //dp(a,prev,r,v);
            a.push_back(prev);
            res = min(res,dp(tt,a,"",r));
        }
        
        res = min(res,dp(tt,tmp,prev,r));
        
        tmp.push_back(t);
        res = min(res,dp(tt,tmp,"",r));
        
        return res;
    }
    int minCut(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<string> a;
        return dp(s,a,"",s);
    }
};
