class Solution {
	public:
		vector<int> bst(TreeNode *root,vector<int> v)
		{
			if(root==NULL)
				return v;
			v = bst(root->left,v);
			v.push_back(root->val);
			v = bst(root->right,v);
			return v;
		}
		bool isValidBST(TreeNode *root) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			if(root==NULL)
				return true;

			vector<int> v;
			v = bst(root,v);
			for(int i=0;i<v.size()-1;i++)
			{
				if(v[i]>=v[i+1])
					return false;
			}
			return true;
		}
};
