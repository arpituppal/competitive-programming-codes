#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstring>
#include <stack>
#include <cctype>
#include <utility>
#include <map>
#include <string>
#include <climits>
#include <set>
#include <sstream>
#include <utility>
#include <ctime>
#include <cassert>
#include <fstream>
using namespace std;
typedef long long LL;
#define MS(A) memset(A, 0, sizeof(A))
#define MSV(A,a) memset(A, a, sizeof(A))
#define MAX(a,b) ((a >= b) ? (a) : (b))
#define MIN(a,b) ((a >= b) ? (b) : (a))
#define ABS(a) (((a) > 0) ? (a) : (-a))
#define MP make_pair
#define PB push_back
#define getcx getchar_unlocked
#define INF (int(1e9))
#define INFL (LL(1e18))
#define EPS 1e-12
#define chkbit(s, b) (s & (1<<b))
#define setbit(s, b) (s |= (1<<b))
#define clrbit(s, b) (s &= ~(1<<b))


int main() {

	int t;
	cin>>t;
	while(t--) {
		int n, e, i, ans = 0;
		vector<int> vec;

		cin>>n;
		for(i = 0; i < n ;i++) {
			cin>>e;
			vec.PB(e);
		}

		sort(vec.begin(), vec.end());
		int cnt = 0;

		for(i = 0 ; i < n ; i++) {
			cnt++;
			if(cnt == vec[i]) {
				ans++;
				cnt = 0;
			}
		}

		printf("%d\n", ans);
	}

	return 0;
}