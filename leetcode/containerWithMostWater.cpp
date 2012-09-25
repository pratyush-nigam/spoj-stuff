class Solution {
	public:
		int maxArea(vector<int> &height) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i=0,j=height.size()-1;
			int h,max=0;
			while(i<j)
			{
				h = height[i];
				if(h > height[j])
				{
					h = height[j];
				}
				if(h*(j-i) > max)
					max = h*(j-i);
				if(height[j] > height[i])
					i++;
				else
					j--;
			}
			return max;
		}
};
