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
		bool path(TreeNode *root, int s, int sum)
		{
			if(root==NULL)
				return false;
			if(root->left==NULL && root->right==NULL && s+root->val==sum)
				return true;
			return path(root->left,s+root->val,sum)||path(root->right,s+root->val,sum);

		}
		bool hasPathSum(TreeNode *root, int sum) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			return path(root, 0, sum);
		}
};
