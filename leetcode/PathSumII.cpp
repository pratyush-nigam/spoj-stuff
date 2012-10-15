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
		vector<vector<int> > path(TreeNode *root, int sum, int s,vector<int> v,vector<vector<int> > p)
		{
			if(root==NULL)
				return p;
			if(sum==s+root->val && root->right == NULL && root->left == NULL)
			{
				v.push_back(root->val);
				p.push_back(v);
				return p;
			}
			v.push_back(root->val);
			p = path(root->left,sum,s+root->val,v,p);
			p = path(root->right,sum,s+root->val,v,p);
			return p;
		}
		vector<vector<int> > pathSum(TreeNode *root, int sum) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			vector<int> v;
			vector<vector<int> > p;
			return path(root, sum, 0,v,p);
		}
};
