#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

#define FOR(i, a, b) for (int i(a), _b(b); i <= _b; i++)
#define FORD(i, a, b) for (int i(a), _b(b); i >= _b; i--)
#define REP(i, n) for (i = 0; i < (n); i++)
#define REPD(i, n) for (int i((n)-1); i >= 0; i--)
#define CLR(x, with) memset((x), with, sizeof(x))
#define ALL(x) (x).begin(), (x).end()

typedef long long LL;
typedef unsigned long long ULL;

#define MAXN 5000+3

int N;
int A[4010], B[4010], C[4010], D[4010];
int num[16000100];
int len;

int main()
{
	//freopen("file.txt", "r", stdin);	

	scanf("%d", &N);

	int i, j;
	REP(i, N)
	{
		scanf("%d %d %d %d", &A[i], &B[i], &C[i], &D[i]);
	}

	len = 0;
	REP(i, N)
	{
		REP(j, N) num[len++] = A[i] + B[j];
	}
	sort(num, num+len);	

	LL res = 0;
	pair<int*, int*> find;
	REP(i, N) REP(j, N)
	{
		find = equal_range(num, num+len, -(C[i]+D[j]));
		res += find.second - find.first;
	}
	printf("%lld\n", res);

	return 0;
}
