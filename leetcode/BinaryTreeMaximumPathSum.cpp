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
		int sum(TreeNode *root)
		{
			if(root==NULL)
				return 0;
			return root->val + max(max(sum(root->right),sum(root->left)),0);
		}
		int maximum(TreeNode *root)
		{
			stack<TreeNode*> s;
			//s.push(root);
			int m = INT_MIN;
			TreeNode *current=root;
			while(current || !s.empty())
			{
				if(current)
				{
					s.push(current);
					current = current->left;
				}
				else
				{
					TreeNode *t = s.top();
					s.pop();
					int d1,d2;
					d1 = sum(t->left);
					d2 = sum(t->right);
					int r;
					if(d1<0)
						d1 = 0;
					if(d2<0)
						d2 = 0;
					r = d1 + d2 +t->val;
					m = max(r,m);
					current = t->right;
				}
			}
			return m;
		}
		int maxPathSum(TreeNode *root) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			return maximum(root);
		}
};
