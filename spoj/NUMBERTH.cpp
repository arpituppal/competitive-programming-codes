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
#define N 10000000

int sieve[N];
char s[10];

void pre() {

	int i, j;
	sieve[0] = 1;
	sieve[1] = 1;

	for(i = 2; i * i < N; i++) {

		if(!sieve[i]) {

			for(j = i * i; j < N; j+=i) {
				sieve[j] = 1;
			}
		}
	}
}

int main(){

	pre();

	int n, i, j;
	
	scanf("%d", &n);
	while(n--) {

		int m = 0, ans = 0;
		set<int> ansset;

		scanf("%s", s);
		int l = strlen(s);
		vector<int> digits;

		for(i = 0; i < l; i++) {
			digits.PB(s[i] - '0');
		}

		for(i = 0; i < (1<<l); i++) {
			
			vector<int> vec;

			for(j = 0; j < l; j++) {
			
				if(i &(1<<j)) {
					vec.PB(digits[j]);
				}
			}

			sort(vec.begin(), vec.end());

			do {

				m = 0;
				for(int z = 0; z < vec.size(); z++) {
					m = (m*10) + (vec[z]);
				}

				if(!sieve[m]) {
					ansset.insert(m);
				}

		}while(next_permutation(vec.begin(), vec.end()));
	}

	printf("%lu\n", ansset.size());
}
	return 0;
}