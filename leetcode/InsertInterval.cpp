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
		vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i=0;
			vector<Interval> v;
			if(intervals.size()==0){
				v.push_back(newInterval);
				return v;
			}
			while(i<intervals.size())
			{
				if(newInterval.start < intervals[i].start)
				{
					int j = i;
					while(j<intervals.size())
					{
						if(newInterval.end < intervals[j].start)
						{
							v.push_back(newInterval);
							int k;
							for(k=j;k<intervals.size();k++)
								v.push_back(intervals[k]);
							return v;//append rest
						}
						else if(intervals[j].start <= newInterval.end && newInterval.end <= intervals[j].end)
						{
							Interval y;
							y.start = newInterval.start;
							y.end = intervals[j].end;
							v.push_back(y);
							int k;
							for(k=j+1;k<intervals.size();k++)
								v.push_back(intervals[k]);
							return v;
						}
						else if(intervals[j].end < newInterval.end)
						{
							//v.append(interval[j]);
							j++;
						}
					}
					v.push_back(newInterval);
					return v;
				}
				else if(intervals[i].start <= newInterval.start && newInterval.start <= intervals[i].end)
				{
					int j = i;
					while(j<intervals.size())
					{
						if(newInterval.end < intervals[j].start)
						{
							Interval y;
							y.start = intervals[i].start;
							y.end = newInterval.end;
							v.push_back(y);
							int k;
							for(k=j;k<intervals.size();k++)
								v.push_back(intervals[k]);
							return v;//append rest
						}
						else if(intervals[j].start <= newInterval.end && newInterval.end <= intervals[j].end)
						{
							Interval y;
							y.start = intervals[i].start;
							y.end = intervals[j].end;
							v.push_back(y);
							int k;
							for(k=j+1;k<intervals.size();k++)
								v.push_back(intervals[k]);
							return v;
						}
						else if(intervals[j].end < newInterval.end)
						{
							j++;
						}
					}
					Interval y;
					y.start = intervals[i].start;
					y.end = newInterval.end;
					v.push_back(y);
					return v;
				}
				else if(newInterval.start > intervals[i].end)
				{
					v.push_back(intervals[i]);
					i++;
				}
			}
			v.push_back(newInterval);
			return v;
		}
};
