class Solution {
	public:
		vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			queue<TreeNode*> q1,q2;

			vector<vector<int> > v;
			if(root == NULL)
				return v;
			q1.push(root);
			int flag = 0;
			while(!q1.empty())
			{
				vector<int> t;
				while(!q1.empty())
				{
					TreeNode *y = q1.front();
					q1.pop();
					t.push_back(y->val);
					if(y->left!=NULL)
						q2.push(y->left);
					if(y->right!=NULL)
						q2.push(y->right);
				}
				while(!q2.empty())
				{
					q1.push(q2.front());
					q2.pop();
				}
				if(flag == 1)
				{
					flag = 0;
					reverse(t.begin(),t.end());
				}
				else
					flag = 1;
				v.push_back(t);
			}
			return v;
		}
};
