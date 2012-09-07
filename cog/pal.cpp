#include <string>

using namespace std;

// is [begin,end) a palindrom?
template <typename iterator>
bool isPalindrome(iterator begin, iterator end)
{
while (begin + 1 < end)
{
if (*begin != *(end - 1))
return false;

begin++;
end--;
}

return true;
}

// does s have K or more M character palindrom substrings?
bool hasKPalindromeSubstrings(const string& s, int M, int K)
{
int n = 0;
for (int i = 0; i <= s.size() - M; i++)
{
if (isPalindrome(s.begin() + i, s.begin() + i + M))
n++;
}

return n >= K;
}

// increment string along 'AAAAA', 'AAAAB' ... 'ZZZZZ', return false
on 'ZZZZZ'
bool incrementString(string& s)
{
for (int i = 0; i < s.size(); i++)
{
if (s[i] != 'Z')
{
s[i]++;
return true;
}
else
s[i] = 'A';

}
return false;
}
