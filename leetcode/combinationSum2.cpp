class Solution {
public:
    void f(int i, vector<vector<int> > &v,vector<int> a,int sum,int t,vector<int> c)
    {
        if(i==c.size())
        {
            if(sum == t)
                v.push_back(a);
            return;
        }
        if(sum == t)
        {
            v.push_back(a);
            return;
        }
        if(sum > t)
            return;
        
        int s = sum;
        int j=0;
        while(s+(j*c[i])<=t)
        {
            f(i+1,v,a,s+(j*c[i]),t,c);
            a.push_back(c[i]);
            j++;
        }
        return;
    }
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> a;
        vector<vector<int> > v;
        sort(candidates.begin(),candidates.end());
        f(0,v,a,0,target,candidates);
        return v;
    }
};
