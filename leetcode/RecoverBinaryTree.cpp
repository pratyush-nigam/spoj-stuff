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
		void inorder(TreeNode **first,TreeNode **last,TreeNode **middle,TreeNode *root,TreeNode **prev)
		{
			if(root)
			{
				inorder(first,last,middle,root->left,prev);
				if(*prev)
				{
					if((*prev)->val > root->val && !*first)
					{
						*first = *prev;
						*middle = root;
					}
					else if((*prev)->val > root->val)
					{
						*last = root;
					} 

				}
				*prev = root;
				inorder(first,last,middle,root->right,prev);
			}
			return;
		}
		void recoverTree(TreeNode *root) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			TreeNode *first=NULL;
			TreeNode *last=NULL;
			TreeNode *prev=NULL;
			TreeNode *middle=NULL;
			inorder(&first,&last,&middle,root,&prev); 
			if(first && last)
				swap(first->val,last->val);
			else if(first && middle)
				swap(first->val,middle->val);
			return;
		}
};
