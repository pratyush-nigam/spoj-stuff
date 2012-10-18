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
		int minD(TreeNode *root, int m)
		{
			if(root == NULL)
				return 10000;
			else if(root->left==NULL&&root->right == NULL)
				return m+1;
			else
				return min(minD(root->left,m+1),minD(root->right,m+1));
		}
		int minDepth(TreeNode *root) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			if(root==NULL)
				return 0;
			return minD(root,0);
		}
};
