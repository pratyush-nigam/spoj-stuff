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
		void flatten(TreeNode *root) {
			if(root==NULL)
				return;
			stack<TreeNode*> s;
			TreeNode *tmp = NULL;
			s.push(root);
			while(!s.empty())
			{
				TreeNode *top =s.top();
				s.pop();
				if(top->right) s.push(top->right);
				if(top->left) s.push(top->left);
				top->left = NULL;
				top->right = NULL;
				if(tmp==NULL)
				{
					tmp = top;
				}
				else
				{
					tmp->right = top;
					tmp = tmp->right;
				}
			}
			root = tmp;
			return;
		}
};
