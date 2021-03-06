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
#define MP make_pair
#define PB push_back
#define getcx getchar_unlocked
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
#define MAX 1000000

/* Sieve of Eratosthenes */
bitset<MAX> prime;
void compute_prime() {
	prime.flip(); //makes all true
	prime[0] = prime[1] = false;
	
	for(int i=2;i*i<MAX;i++) {
		if(prime[i])
			for(int j=i*i;j<MAX;j+=i) prime[j] = false;
	}
}

vector<pair<int, int> > factorise(int number) {
	int num = number;
	vector<pair<int, int> > v;
	for(int j=2;j*j<=number;j++) {
		int cnt = 0;
		
		while(num%j==0) {
			cnt++;
			num/=j;
		}
		if(cnt > 0) v.PB(MP(j, cnt));
	}
	if(num > 1) v.PB(MP(num, 1));
	return v;
}

/* Factorial modulo MOD */
LL fact[MAX];
void factorial() {
	fact[0] = 1;
	for(int i=1;i<MAX;i++) {
		fact[i] = (i * fact[i-1]) % MOD;
	}
}

/* Modulo exponentiation */
LL power(LL base, LL exp, LL ans) {
	if(!exp) return ans % MOD;
	if(exp&1) ans = (ans * base) % MOD;
	return power((base * base) % MOD, exp>>1, ans);
}

/* nCr modulo MOD */
LL nCr(LL n, LL r) {
	if(n < r) return 0;
	LL numerator = fact[n];
	LL denominator = (fact[n-r] * fact[r]) % MOD;
	return (numerator * power(denominator, MOD-2, 1)) % MOD;
}


/* gcd of 2 two numbers */
int gcd(int a, int b) {

	if(a < b) return gcd(b,a); 
	if(b == 0) 	return a;
	return gcd(b, a %b);
}

/* generate all subsets 
	n is the size of set whose all subsets needs to be generated
*/

void subset(vector<int> vec, int n) {
	for(int i = 0; i < (1<< n); i++) {
		for(int j = 0; j < n; j++) {

			if(i & (1 << j))  {
				// add in subset
				cout<<vec[j];
			}
		}

		//got 1 subset
		cout<<endl;
	}
}



/* Union Find / DSU */
//have a parent array global
int parent[MAX];
int find(int u) {
	if(u == parent[u])return u;
	return parent[u] = find(parent[u]);
}

void _union(int u, int v) {
	parent[find(u)] = find(v);
}

/* Modulo multiplication */
LL mulmod(LL a, LL b) {
	a = (a + MOD) % MOD;
	b = (b + MOD) % MOD;
	LL res = 0;
	a %= MOD;
	while(b) {
		if(b&1) res = (res+a)%MOD;
		a = (a*2)%MOD;
		b >>= 1;
	}
	return res; 
}
