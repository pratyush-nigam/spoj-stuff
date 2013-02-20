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
    int sumt(TreeNode *root,int num,int sum)
    {
        if(!root)
            return 0;
        num = num*10 + root->val;
        if(!root->left && !root->right)
        {
            sum+=num;
            return sum;
        }
        int s = 0;
        if(root->left)
            s = s + sumt(root->left,num,sum);
        if(root->right)
            s = s + sumt(root->right,num,sum);
        return s;
    }
    int sumNumbers(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        return sumt(root,0,0);
    }
};
