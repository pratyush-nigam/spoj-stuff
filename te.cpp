#include <iostream>
#include <string>
#include<cstdio>
using namespace std;

int main ()
{
	string str ("There are two needles in this haystack with needles.");
	string str2 ("needle");
	size_t found;

	// different member versions of find in the same order as above:
	found=str.find("ned");
	printf("%d\n",int(found));
	if (found!=string::npos)
		cout << "first 'needle' found at: " << int(found) << endl;

	found=str.find("needles are small",found+1,6);
	if (found!=string::npos)
		cout << "second 'needle' found at: " << int(found) << endl;

	found=str.find("haystack");
	if (found!=string::npos)
		cout << "'haystack' also found at: " << int(found) << endl;

	found=str.find('.');
	if (found!=string::npos)
		cout << "Period found at: " << int(found) << endl;

	// let's replace the first needle:
	str.replace(str.find(str2),str2.length(),"preposition");
	cout << str << endl;

	return 0;
}
