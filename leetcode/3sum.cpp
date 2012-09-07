class Solution {
	public:
		vector<vector<int> > threeSum(vector<int> &num) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			/*vector<vector <int> > v;
			  int s=0;
			  sort(num.begin(),num.end());
			  int i,j, n=num.size();        
			  for(i=0;i<n;i++)
			  {
			  int first = i+1;
			  int last = n-1;
			  while(first < last)
			  {
			  int y = (-num[i]) - num[first];
			  if(num[last] > y)
			  last--;
			  else if(num[last] < y)
			  first++;
			  else
			  {
			  printf("%d %d %d\n",num[i],num[first],num[last]);
			  v[s].push_back(num[i]);
			  v[s].push_back(num[first]);
			  v[s++].push_back(num[last]);
				first++;
				last--;
			  }
			  }
			  }
			  return v;*/
			sort(num.begin(), num.end());
			vector<vector<int> > triplets;
			vector<int> triplet(3);
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
						triplets.push_back(triplet);
						j++;
						k--;
					}
				}
			}
		}
};
