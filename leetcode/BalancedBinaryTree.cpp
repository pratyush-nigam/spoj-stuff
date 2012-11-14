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
		int minh(TreeNode *root)
		{
			if(root==NULL)
				return 0;
			else
			{
				return 1 + min(minh(root->left),minh(root->right));
			}
		}
		int maxh(TreeNode *root)
		{
			if(root==NULL)
				return 0;
			else
			{
				return 1 + max(maxh(root->left),maxh(root->right));
			}
		}
		bool isBalanced(TreeNode *root) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			if(root==NULL)
				return true;
			if(abs(maxh(root->right)-maxh(root->left)) > 1)
				return 0;
			else
				return isBalanced(root->right) && isBalanced(root->left);
		}
};
