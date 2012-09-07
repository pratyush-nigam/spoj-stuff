#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

#define FOR(i, a, b) for (i = (a); i <= (b); i++)
#define FORD(i, a, b) for (i = (a); i >= (b); i--)
#define REP(i, n) for (i = 0; i < (n); i++)
#define REPD(i, n) for (i = ((n)-1); i >= 0; i--)
#define CLR(x, with) memset((x), with, sizeof(x))
#define ALL(x) (x).begin(), (x).end()

typedef long long LL;
typedef unsigned long long ULL;

int N, K, A[11];
bool can[100003];

int main()
{
	int i, j;
	//freopen("input.txt", "r", stdin);

	scanf("%d %d", &N, &K);
	REP(i, K) scanf("%d", &A[i]);

	FOR(i, 1, K-1) A[i] += A[i-1];
	FOR(i, 0, N) can[i] = false;
	can[0] = true;

	REP(i, K)
	{
		FOR(j, A[i], N) can[j] = can[j] || can[j-A[i]];
	}
	puts(can[N] ? "YES\n" : "NO\n");	

	return 0;
}
