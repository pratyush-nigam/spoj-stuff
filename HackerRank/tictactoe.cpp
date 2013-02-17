#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <climits>
#include <cstdio>
using namespace std;

/* Complete the function below to print 2 integers separated by a single space which will be your next move 
 */
//DP solution

//Loss result -> x(-2)
//Win result -> x2
//Draw result -> x1
char result(vector<string> a)
{
	int i,j;
	if((a[0][0] == a[0][1] && a[0][0] == a[0][2])||(a[0][0] == a[1][0] && a[0][0] == a[2][0])||(a[0][0] == a[1][1] && a[0][0] == a[2][2]))
		return a[0][0];
	if((a[0][2] == a[1][2] && a[0][2] == a[2][2])||(a[0][2] == a[1][1] && a[0][2] == a[2][0]))
		return a[0][2];
	if((a[0][1] == a[1][1] && a[0][1] == a[2][1])||(a[2][1] == a[2][0] && a[2][1] == a[2][2]))
		return a[2][1];
	return 'd';    
}
vector<int> next(vector<int> b,char player,char pl,vector<string> a,vector<pair<int,int> > v)
{
	if(v.size()==0)
	{
		char w = result(a);
		if(w=='d')
		{
			b.push_back(0);
			return b;
		}
		if(w==player)
		{
			b.push_back(1);
			return b;
		}
		else
		{
			b.push_back(-1);
			return b;
		}
	}
	char nxt;
	if(pl=='X')
		nxt = 'O';
	else
		nxt = 'X';
	int i,n=v.size();
	for(i=0;i<n;i++)
	{
		pair<int,int> p;
		p = v[i];
		v.erase(v.begin()+i);
		a[p.first][p.second] = pl;
		b = next(b,player,nxt,a,v);
		a[p.first][p.second] = '_';
		v.insert(v.begin()+i,p);
	}
	return b;
}
void nextMove(char player, vector <string> board){
	int i,j;
	vector<pair<int,int> > v;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			if(board[i][j]=='_')
				v.push_back(make_pair(i,j));
	}
	if(player=='X' && v.size() == 9)
	{
		cout << "0 0" << endl;
		return;
	}
	if(player=='O' && v.size() == 8)
	{
		if(board[1][1]=='X')
			cout << "0 0" << endl;
		else
			cout << "1 1" << endl;
		return;

	}

	int mx=INT_MIN;
	pair<int,int> p;
	for(i=0;i<v.size();i++)
	{
		//cout << v[i].first << " " << v[i]second << endl;
		printf("%d %d\n",v[i].first,v[i].second);
		vector<int> y;
		int sum = 0;
		y = next(y,player,player,board,v);
		for(j=0;j<y.size();j++)
		{
			sum += y[i];
			printf("%d",y[i]);
		}
		cout << endl;
		if(sum > mx){
			mx = sum;
			p.first = v[i].first;
			p.second = v[i].second;
		}
	}
	cout << p.first << " " << p.second << endl;
	return;
}
int main() {

	char player;
	vector <string> board;

	//If player is X, I'm the first player.
	//If player is O, I'm the second player.
	cin >> player;

	//Read the board now. The board is a 3x3 array filled with X, O or _.
	for(int i=0; i<3; i++) {
		string s; cin >> s;
		board.push_back(s);
	}

	nextMove(player,board);

	return 0;
}
