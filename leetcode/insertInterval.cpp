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
			int i;
			for(i=0;i<intervals.size();i++)
			{
				if(intervals[i].start > newInterval.start)
				{
					i = i-1;
					break;
				}
			}

			int j;
			if(intervals[i].end > newInterval.start)
			{
				if(newInterval.end <= intervals[i].end)
					return intervals;
				else
				{
					j = i+1;
					while(1)
					{
						if(intervals[j].end > )
					}
				}
			}
			else if(intervals[i].end < newInterval.start)
			{

			}
			else
			{

			}

		}
};
