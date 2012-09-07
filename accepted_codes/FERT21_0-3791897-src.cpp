#include <iostream>
#include <string>
using namespace std;
string p[1010];
void pow5(int n)
{
	string ret = "1";
	for(int i = 1; i <= n; ++i)
	{
		int cary = 0;
		for(int i = ret.size()-1; i >= 0; --i)
		{
			int d = (ret[i]-'0') * 5 + cary;
			if(d > 9)
			{
				cary = d / 10;
				d = d % 10;
			}
			else
				cary = 0;
			ret[i] = d + '0';
		}
		if(cary)
			ret.insert(0, 1, cary + '0');
		int diff = i - ret.size();
		if(diff)
			ret.insert(0, diff, '0');
		p[i] = ret;
	}
}
 
int main()
{
 
	//freopen("f.in", "r", stdin);
	//freopen("f.out", "w", stdout);
	pow5(1000);
	int T; cin >> T;
	while(T--)
	{
		int n; cin >> n;
		if(n == 1)
			cout << "1\n";
		else
		    cout << "0." + p[n-1] << endl;
	}
	return 0;
}
