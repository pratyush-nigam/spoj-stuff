#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

string addBinary(string a, string b) {
	// Start typing your C/C++ solution below
	// DO NOT write int main() function
	int i;
	int n = a.size(),m=b.size();
	if(n < m)
	{
		for(i=0;i<m-n;i++)
			a = '0' + a;
	}
	else if(n > m)
	{
		for(i=0;i<n-m;i++)
			b = '0' + b;
	}
	cout << a << "  " << b << endl;
	int carry = 0;
	string res = "";
	for(i=a.size()-1;i>=0;i--)
	{
		if(a[i] == '0' && b[i]=='0')
		{
			if(carry == 1)
				res = '1' + res;
			else
				res = '0' + res;
			carry = 0;
		}
		else if((a[i] == '0' && b[i]=='1') || (a[i]=='1' && b[i]=='0'))
		{
			if(carry == 1){
				res ='0' + res;
				carry = 1;
			}
			else
			{
				res = '1' + res;
				carry = 0;
			}

		}
		else if(a[i]=='1' && b[i]=='1')
		{
			if(carry == 1)
			{
				res = '1' + res;
			}
			else
				res = '0' + res;
			carry = 1;
		}
	}
	if(carry == 1)
		res = '1' + res;
	return res;
}

int main()
{
	cout << addBinary("11","1") << endl;
	return 0;
}
