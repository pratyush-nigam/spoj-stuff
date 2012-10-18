/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
	public:
		ListNode *deleteDuplicates(ListNode *head) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			if(head==NULL || head->next == NULL)
				return head;
			ListNode *s = head->next;
			ListNode *prev = head;
			while(s!=NULL)
			{
				if(s->val != prev->val)
				{
					prev = s;
					s = s->next;
				}
				else
				{
					prev->next = s->next;
					ListNode *tmp = s;
					s = s->next;
					free(tmp);
				}
			}
			return head;
		}
};
