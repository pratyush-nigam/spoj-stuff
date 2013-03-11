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
    void dp(string tt,vector<string> a,string prev, string s, vector<vector<string> > &v)
    {
        if(s.size()==0)
        {
            string y="";
            int n = a.size();
            for(int i=0;i<n;i++)
                y = y + a[i];
            if(y==tt)
                v.push_back(a);
            return;
        }    
        
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
            dp(tt,a,"",r,v);
        }
        
        dp(tt,tmp,prev,r,v);
        
        tmp.push_back(t);
        dp(tt,tmp,"",r,v);
        
        return;
    }
    vector<vector<string>> partition(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<string> > v;
        vector<string> a;
        dp(s,a,"",s,v);
        return v;
    }
};
