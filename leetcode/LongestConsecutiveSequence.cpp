class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int i,n=num.size();
        unordered_map<int,int> m;
        for(i=0;i<n;i++)
        {
            m[num[i]]=0;
        }
        int mx=0;
        for(i=0;i<n;i++)
        {
            if(m[num[i]]==0)
            {
                int nxt = num[i]+1,c=0;
                while(m.find(nxt)!=m.end() && m[nxt]==0)
                {
                    c++;
                    m[nxt] = -1;
                    nxt++;
                }
                if(m.find(nxt)==m.end())
                    m[num[i]] = c;
                else
                    m[num[i]] = c+m[nxt]+1;
                if(mx < m[num[i]])
                    mx= m[num[i]];
            }
        }
        return mx+1;
    }
};
