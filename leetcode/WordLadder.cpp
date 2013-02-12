class Solution {
public:
    int dijkstra(string s, string e, map<string, set<string> > m)
    {
        map<string,int> d;
        map<string, set<string> >::iterator it;
        vector<pair<int,string> > v;
        for(it = m.begin();it!=m.end();it++)
        {
            //m[it->first] = 10000000;
            if(it->first==s && m[it->first].size()>0)
                v.push_back(make_pair(1,it->first));
            else
                v.push_back(make_pair(10000000,it->first));
        }
        while(v.size()>0)
        {
            std::sort(v.begin(),v.end());
            string t = v[0].second;
            int u = v[0].first;
            if(u==10000000)
                break;
            if(t==e)
            {
                
                return u;
            }
            v.erase(v.begin());
            int i;
            for(i=0;i<v.size();i++)
            {
                if(m[t].find(v[i].second)!=m[t].end())
                {
                    v[i].first = min(u+1,v[i].first);                    
                }
            }
        }
        return 0;
    }
    int ladderLength(string start, string end, unordered_set<string> &dict) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        /*if(start==end)
            return 0;*/
        if(dict.size()==0)
            return 0;
        set<string> v1;
        map<string,set<string> > m;
        int i,count=0;
        //Correct this part
        for(i=0;i<start.size();i++)
        {
            if(start[i]!=end[i])
                count++;
        }
        if(count==1)
        {
            return 2;
        }
        else
        {
            
            m[start]=v1;
            m[end] = v1;
        }
        //End
        unordered_set<string>::iterator it;
        for(it=dict.begin();it!=dict.end();it++)
        {
            string y = *it;
            set<string> v;
            m[y]=v;
            map<string,set<string> >::iterator iter;
            for(iter = m.begin();iter!=m.end();iter++)
            {
                string x = iter->first;
                count = 0;
                for(i=0;i<x.size();i++)
                {
                    if(x[i]!=y[i])
                        count++;
                }
                if(count==1)
                {
                    m[x].insert(y);
                    if(start!=x || start==end)
                        m[y].insert(x);
                }
            }
        }
        m[end] = v1;
        return dijkstra(start,end,m);
    }
};
