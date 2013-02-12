/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> merge(vector<Interval> &intervals) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<pair<int,int> > v;
        int i,flg=0,j=0;
        for(i=0;i<intervals.size();i++)
        {
            v.push_back(make_pair(intervals[i].start,1));
            v.push_back(make_pair(intervals[i].end,-1));
        }
        std::sort(v.begin(),v.end());
        vector<Interval> res;
        i=0;
        while(i<v.size())
        {
            flg = flg + v[i].second;
            if(flg==0)
            {
                if(res.size()>0 && v[j].first == res[res.size()-1].end)
                {
                    res[res.size()-1].end = v[i].first;
                }
                else
                {
                    Interval y;
                    y.start = v[j].first;
                    y.end = v[i].first;
                    res.push_back(y);
                }
                j = i + 1;
            }
            i++;
        }
        return res;
    }
};
