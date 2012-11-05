/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
	public:
		void connect(TreeLinkNode *root) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			if(!root)
				return;
			queue<TreeLinkNode*> q1,q2;
			q1.push(root);
			while(!q1.empty())
			{
				while(!q1.empty())
				{
					TreeLinkNode *r = q1.front();
					q1.pop();
					if(!q1.empty())
						r->next = q1.front();
					else
						r->next = NULL;

					if(r->left)
						q2.push(r->left);
					if(r->right)
						q2.push(r->right);
				}
				while(!q2.empty())
				{
					q1.push(q2.front());
					q2.pop();
				}
			}
			return;
		}
};
