/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
		TreeNode *create(ListNode* &head,int l,int r)
		{
			if(l>r || head == NULL)
			  return NULL;
			  int mid = l + (r-l)/2;
			  TreeNode *le = create(head, l , mid-1);
			  TreeNode *root = new TreeNode(head->val);
			  root->left = le;
			  head = head->next;
			  root -> right = create(head,mid+1,r);
			  return root;
		}
		TreeNode *sortedListToBST(ListNode *head) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			if(head==NULL)
				return NULL;
			ListNode *r = head;
			int len = 0;
			while(r!=NULL){
				r = r->next;
				len++;
			}
			return create(head,0,len-1);
		}
};
