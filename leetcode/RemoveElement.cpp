class Solution {
	public:
		int removeElement(int A[], int n, int elem) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			if(n==1 && A[0]==elem)
				return 0;
			int i=0,j=n-1,c=0;
			while(i<j)
			{
				while(j>i && A[j]==elem)
					j--;
				if(elem == A[i])
				{
					A[i]=A[j--];
				}
				else
				{
					i++;
				}
			}
			return j+1;
		}
};
