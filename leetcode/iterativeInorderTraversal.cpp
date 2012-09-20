class Solution {
	public:
		vector<int> inorderTraversal(TreeNode *root) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			vector<int> v;
			TreeNode *current = root;
			stack<TreeNode *> s;
			while(!s.empty() || current)
			{
				if(current)
				{
					s.push(current);
					current = current->left;
				}
				else
				{
					current = s.top();
					v.push_back(current->val);
					s.pop();
					current = current->right;
				}
			}
			return v;
		}
};
