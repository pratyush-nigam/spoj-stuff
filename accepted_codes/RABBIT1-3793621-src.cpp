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

int N, M;
int A[4], Res[4];
int MOD;

void Mult(int C[], const int A[], const int B[])
{
	int a = (A[0] * B[0] + A[1] * B[2]) & MOD;
	int b = (A[0] * B[1] + A[1] * B[3]) & MOD;
	int c = (A[2] * B[0] + A[3] * B[2]) & MOD;
	int d = (A[2] * B[1] + A[3] * B[3]) & MOD;
	C[0] = a; C[1] = b; C[2] = c; C[3] = d;
}

int main()
{
	int T, pos;
	//freopen("input.txt", "r", stdin);

	scanf("%d", &T);
	while (T--)
	{
		scanf("%d %d", &N, &M);
		MOD = (1<<M)-1;
		A[0] = 1; A[1] = 1;
		A[2] = 1; A[3] = 0;
		Res[0] = 1; Res[1] = 0;
		Res[2] = 0; Res[3] = 1;

		pos = 1;
		while (N > 0)
		{
			if (N & pos)
			{
				Mult(Res, Res, A);
				N ^= pos;
			}
			Mult(A, A, A);
			pos <<= 1;
		}
		printf("%d\n", Res[0]);
	}
	return 0;
}
