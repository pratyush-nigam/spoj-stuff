#include <cstdio>
#include <algorithm>
using namespace std;

#define rep(i$, n$) for (int i$=0; i$<n$; i$++)
#define rlo long long

int half(int x1, int y1, int x2, int y2) {
	int re=(x1 & y1) ^ (x2 & y2) ^ ((x1 ^ x2) & (y1 ^ y2));
	return re;
}

main() {
	int T, N;
	scanf("%d", &T);
	rep (t,T) {
		scanf("%d", &N);
		
		rlo dp[4][2][2];
		rep(q,4) rep(x,2) rep(y,2) dp[q][x][y]=0;
		
		int x, y, q;
		rep(p,N) {
			scanf("%d%d", &x, &y);
			q=-1;
			if (x>0 && y>0) q=0;
			if (x>0 && y<0) q=1;
			if (x<0 && y<0) q=2;
			if (x<0 && y>0) q=3;
			if (q>=0) ++dp[q][abs(x%2)][abs(y%2)];
		}
		
		rlo sum=0;
		int co[8];
		rep(v,1<<8) {
			int z=v, all=0;
			rep(c,8) {
				co[c]=z & 1;
				z >>= 1;
			}
			all ^= half(co[0], co[1], co[2], co[3]);
			all ^= half(co[3], co[2], co[5], co[4]);
			all ^= half(co[4], co[5], co[6], co[7]);
			all ^= half(co[7], co[6], co[1], co[0]);
			if (!all) sum += 
				dp[0][co[0]][co[1]] *
				dp[1][co[2]][co[3]] *
				dp[2][co[4]][co[5]] *
				dp[3][co[6]][co[7]] ;
		}
		printf("%lld\n", sum);
	}
} 
