#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	string a,c;
	char b;
	map<string,char> m;
	int n,i;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a >> b >> c;
		m[a]=b;
	}
	string s;
	cin >> s;
	i=0;
	string res="";
	int f1,f2,f3;
	f1 = int(s.find("TAG"));
	if(f1==-1)
		f1 = s.size()+1;
	f2 = int(s.find("TGA"));
	if(f2==-1)
		f1 = s.size()+1;
	f3 = int (s.find("TAA"));
	if(f3==-1)
		f1 = s.size()+1;
	
	int l = min(min(int(f2),int(f3)),int(f1));
	
	cout << l << endl;
	while(i+2<s.size())
	{
		string y = s.substr(i,3);
		if(y=="ATG")
		{
			int j = i;
			y = s.substr(j,3);
			while(1)
			{
				cout << y << endl;
				res = res + m[y];
				j+=3;
				if(j>l)
				{
					cout << res << endl;
					return 0;
				}
				y = s.substr(j,3);
			}
			i+=j;
		}
		i++;
	}
	cout << res << endl;
	return 0;
}
