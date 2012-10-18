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
		bool bst(TreeNode *n1, TreeNode *n2)
		{
			if(n1!=NULL && n2!=NULL)
			{
				if(n2->val==n1->val)
					return bst(n1->left,n2->right)&&bst(n1->right,n2->left);
				else
					return false;
			}
			else if(n1==NULL && n2==NULL)
				return true;
			else
				return false;
		}
		bool isSymmetric(TreeNode *root) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			if(root==NULL)
				return true;
			return bst(root->left,root->right);
		}
};
