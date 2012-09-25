class Solution {
public:
    int firstMissingPositive(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int i=0,j=n-1,l = n;
        while(i<j)
        {
            while(i<j && A[i] > 0)
                i++;
            while( i<j && A[j] <= 0)
                j--;
            
                int tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
                //l = j;
                j--;
                i++;
        }
        for(i=0;i<n;i++){
            if(A[i] <= 0)
            {
                l = i;
                break;
            }
        }
        for(i=0;i<l;i++)
        {
            if((A[i]-1) >=0 && (A[i]-1) < l && A[(int)fabs(A[i]-1)] > 0)
                A[(int)fabs(A[i]-1)] = A[(int)fabs(A[i]-1)] - (2*A[(int)fabs(A[i]-1)]);
        }
        int y = 1;
        for(i=0;i<l;i++)
        {
            if(A[i] > 0)
                return i+1;
        }
        y = i+1;
        return y;
    }
};
