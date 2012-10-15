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
		ListNode *mergeKLists(vector<ListNode *> &lists) {
			// Start typing your C/C++ solution below
			// DO NOT write int main() function
			int i;
			priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > q;
			vector<ListNode *> l;
			l = lists;
			for(i=0;i<lists.size();i++)
			{
				q.push(make_pair(lists[i]->val,i));
			}
			ListNode *m=NULL;
			ListNode *head=NULL;
			int flag = 1;
			if(!q.empty())
			{
				m = (ListNode*)malloc(sizeof(ListNode));
				head = m;
				flag = 0;
			}
			while(!q.empty())
			{
				pair<int,int> p = q.top();
				q.pop();
				ListNode *n;
				n = (ListNode*)malloc(sizeof(ListNode));
				n->val = p.first;
				n -> next = NULL;
				m->next = n;
				m = m->next;
				l[p.second] = l[p.second]->next;
				q.push(make_pair(l[p.second]->val,i));
			}
			if(flag == 0)
				head = head->next;
			return head;
		}
};
