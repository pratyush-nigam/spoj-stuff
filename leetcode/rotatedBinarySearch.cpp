class Solution {
public:
    int search(int A[], int n, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int mid,l=0,r=n-1;
        while(l<=r)
        {
            mid = l + ((r-l)/2);
            if(A[mid] == target)
                return mid;
            if(A[l] <= A[mid])
            {
                if(A[l]<= target && target<=A[mid])
                    r = mid-1;
                else
                    l = mid+1;
            }
            else
            {
                if(A[mid] <= target && target <= A[r])
                    l = mid+1;
                else
                    r = mid-1;
            }
        }
        return -1;
    }
};
