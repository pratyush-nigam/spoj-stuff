#include<cstdio>
#include<vector>

using namespace std;

struct tree{
	int val;
	tree *left;
	tree *right;
	tree(int x) : val(x), left(NULL), right(NULL) {}
};


class BSTInorderIterator
{
	private:
		vector<tree *> v;
		int i;
	public:
		BSTInorderIterator(int n,tree *root);
		tree *findprev();
		tree *findnext();
		void moveprev();
		void movenext();
};

vector<tree *> inorder(tree *root,vector<tree *> v)
{
	if(!root)
		return v;
	if(root->left)
		v = inorder(root->left,v);
	v.push_back(root);
	if(root->right)
		v = inorder(root->right,v);
	return v;
}

BSTInorderIterator::BSTInorderIterator(int n,tree *root)
{
	vector<tree *> v1;
	v1 = inorder(root,v1);
	v = v1;
	int l=0,r=v.size()-1,mid;
	while(l<r)
	{
		mid = l + (r-l);
		if(v[mid]->val==n)
			break;
		else if(v[mid]->val < n)
			l = mid+1;
		else
			r = mid-1;
	}
	i = mid;
}	

tree *BSTInorderIterator::findnext()
{
	if(i+1 < v.size())
		return v[i+1];
	else
		return NULL;
}

tree *BSTInorderIterator::findprev()
{
	if(i-1 >= 0)
		return v[i-1];
	else
		return NULL;
}

void BSTInorderIterator::movenext()
{
	if(i+1<v.size())
		i++;
	return;
}

void BSTInorderIterator::moveprev()
{
	if(i-1>=0)
		i--;
	return;
}

/*void BSTInorderIterator::updatetree(tree *root,)
{
	return 
}
*/
int main()
{
	tree *l = new tree(2);
	tree *r = new tree(8);
	tree *root = new tree(5);
	root->left = l;
	root->right = r;
	BSTInorderIterator c(5,root);
	printf("%d\n",c.findnext()->val);
	c.movenext();
	printf("%d\n",c.findprev()->val);

	return 0;
}
