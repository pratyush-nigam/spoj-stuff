class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > triplets;
        if(num.size()==0)
            return triplets;
        sort(num.begin(), num.end());
                       
                        vector<int> triplet(3);
                        set<vector<int> > s;
                        int n = num.size();
                        for (int i = 0;i < n; i++) {
                                int j = i + 1;
                                int k = n - 1;
                                while (j < k) {
                                        int sum_two = num[i] + num[j];
                                        if (sum_two + num[k] < 0) {
                                                j++;
                                        } else if (sum_two + num[k] > 0) {
                                                k--;
                                        } else {
                                            
                                                triplet[0] = num[i];
                                                triplet[1] = num[j];
                                                triplet[2] = num[k];
                                                if(s.find(triplet) == s.end())
                                                {
                                                    s.insert(triplet);
                                                    triplets.push_back(triplet);
                                                }
                                                j++;
                                                k--;
                                        }
                                }
                        }

    }
};
