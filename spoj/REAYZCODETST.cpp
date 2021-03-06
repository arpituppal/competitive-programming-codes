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
#define MOD 1000000007
#define N 100010

LL arr[N];
int main() {

	int t, cass = 0;
	scanf("%d", &t);

	for(cass = 1; cass <= t; cass++) {

		map<LL, LL> freqmap;
		set<LL> nums;
		set<LL> :: iterator it;


		LL ans = 0, n, i, x;

		scanf("%lld %lld", &n, &x);
		
		for(i = 0; i < n; i++) {
			scanf("%lld", &arr[i]);

			freqmap[arr[i]]++;
			nums.insert(arr[i]);
		}
		
		for(it = nums.begin(); it != nums.end(); it++) {
			
			if(x == 0) {
				ans += freqmap[*it] * (freqmap[*it] - 1);
			}

			else {

				if(freqmap[(*it) + x] != 0) {
					ans += freqmap[*it] * (freqmap[(*it) + x]);
				}
			}
		}

		printf("Case %d: %lld\n", cass, ans);
	}

	return 0;
} 