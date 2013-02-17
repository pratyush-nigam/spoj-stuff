class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int i,j,k;
        std::sort(num.begin(),num.end());
        int n = num.size(),res;
        res = num[0]+num[1]+num[2];
        for(i=0;i<n;i++)
        {
            j=i+1;
            k = n-1;
            while(j<k)
            {             
                int sum = num[i]+num[j]+num[k];
                if(sum == target)
                    return sum;
                if(abs(sum-target) < abs(res - target))
                {
                    res = sum;
                }
                if(sum > target)
                    k--;
                else
                    j++;
            }
        }
        return res;
    }
};
