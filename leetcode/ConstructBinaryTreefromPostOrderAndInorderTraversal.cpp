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
		TreeNode *build(vector<int> preorder,vector<int> inorder)
		{
			if(preorder.size()==0)
				return NULL;
			TreeNode *root = new TreeNode(preorder[preorder.size()-1]);
			vector<int> r,l;
			int ind,n=inorder.size()-1,j=0,i=0;
			vector<int>::iterator it,it1;
			while(j<inorder.size())
			{
				if(inorder[j]==preorder[preorder.size()-1])
				{
					ind = j;
					break;
				}
				j++;
			}
			for(i=0;i<preorder.size()-1;i++)
			{
				j=0;
				while(j<inorder.size())
				{
					if(inorder[j]==preorder[i])
					{
						break;
					}
					j++;
				}
				if(ind > j)
					l.push_back(preorder[i]);
				else
					r.push_back(preorder[i]);
			}
			root->left = build(l,inorder);
			root->right = build(r,inorder);
			return root;
		}
		TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			TreeNode *root;
			root = build(postorder,inorder);
			return root;
		}
};
