/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
	public:
		TreeNode *create(vector<int> num, int l, int r)
		{
			if(r < l)
				return NULL;
			int mid = l + (r-l)/2;
			TreeNode *root = new TreeNode(num[mid]);
			root->left = create(num,l,mid-1); 
			root->right = create(num,mid+1,r);
			return root;
		}
		TreeNode *sortedArrayToBST(vector<int> &num) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			return create(num,0,num.size()-1);
		}
};
