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
		bool inorder(TreeNode *p, TreeNode *q)
		{
			if(p==NULL && q==NULL)
				return true;
			else if((p!=NULL && q==NULL)||(p==NULL && q!=NULL))
				return false;
			else if(p->val==q->val)
				return inorder(p->left,q->left)&&inorder(p->right,q->right);
			else
				return false;
		}
		bool isSameTree(TreeNode *p, TreeNode *q) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			return inorder(p,q);
		}
};
