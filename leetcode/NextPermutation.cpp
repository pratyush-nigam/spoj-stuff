class Solution {
	public:
		/*void reverse(vector<int> &num, int i, int j) {
		  while (i < j) swap(num[i++], num[j--]);
		  };*/
		void nextPermutation(vector<int> &num) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int n = num.size();
			if(n<2)
				return;
			int i=n-2,j;
			while(i>=0 && num[i]>=num[i+1])
				i--;
			if(i==-1)
			{
				reverse(num.begin(),num.end());
				return;
			}
			j = n-1;
			while(j>i && num[j] <= num[i])
				j--;
			swap(num[i],num[j]);
			reverse(num.begin()+i+1,num.end());
			return;
		}
};
