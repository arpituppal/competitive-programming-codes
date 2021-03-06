#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define MSV(A,a) memset(A, a, sizeof(A))
#define MP make_pair
#define PB push_back
#define INF (int(1e9))
#define INFL (LL(1e18))
#define EPS 1e-12
#define chkbit(s, b) (s & (1<<b))
#define setbit(s, b) (s |= (1<<b))
#define chk(a) cerr << endl << #a << " : " << a << endl
#define chk2(a,b) cerr << endl << #a << " : " << a << "\t" << #b << " : " << b << endl
#define chk3(a,b,c) cerr << endl << #a << " : " << a << "\t" << #b << " : " << b << "\t" << #c << " : " << c << endl
#define chk4(a,b,c,d) cerr << endl << #a << " : " << a << "\t" << #b << " : " << b << "\t" << #c << " : " << c << "\t" << #d << " : " << d << endl
#define rep(i, a, n) for(i=a;i<n;i++)
#define rev(i, a, n) for(i=a;i>=n;i--)
#define rep_itr(itr, c) for(itr = (c).begin(); itr != (c).end(); itr++)
#define MOD 1000000007
#define MAX 131072
#define LOG_MAX 18
#define in(x) scanf("%d", &x)
#define inl(x) scanf("%lld", &x)
#define in2(x, y) scanf("%d %d", &x, &y)
#define inl2(x, y) scanf("%lld %lld", &x, &y)
typedef pair<int, int> pi;
typedef pair<LL, LL> pl;
const char en = '\n';

int main() {

	int t;
	in(t);
	while(t--) {

		int n, arr[MAX], dp[MAX], i, q, idx, ans;
		in(n);
		
		MSV(dp, -1);
		

		for(i = 1; i <= n; i++) {
			in(arr[i]);
			dp[i] = arr[i];
		}

		for(int bit = 0; bit < LOG_MAX; bit++) {
			for(i = 0 ; i < MAX; i++) {
				if(i & (1<<bit)) dp[i] = max(dp[i], dp[i ^ (1<<bit)]);
			}
		}

		in(q);
		while(q--) {
			in(idx);
			ans = dp[idx ^ (MAX-1)];
			if(ans != -1) ans += arr[idx];

			cout<<ans<<en;
		}

	}

	return 0;
}