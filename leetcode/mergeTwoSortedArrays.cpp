public:
void merge(int A[], int m, int B[], int n) {
	// Start typing your C/C++ solution below
	// DO NOT write int main() function
	int i=m+n-1,j=m-1,k=n-1;
	//for(i=m-1;i>=0;i--)
	//{
	while(j>=0 && k>=0)
	{
		if(A[j]>B[k])
		{
			A[i--]=A[j--];
		}
		else
		{
			A[i--] = B[k--];
		}
	}
	if(k>=0)
	{
		while(k>=0)
			A[i--]=B[k--];
	}
}
};
