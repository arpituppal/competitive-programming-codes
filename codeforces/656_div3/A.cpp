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
#define MAX 100005

int main() {

	int t;
	cin>>t;

	while(t--) {

		int x, y, z, a, b, c, mx = -1;
		cin>>x>>y>>z;

		mx = max(x, max(y,z));

		if(mx == x && mx == y && mx == z) {
			cout<<"YES"<<endl;
			cout<<x<< " " <<y<< " " << z<<endl;
			continue;
		} 

		if(mx == x) {

			if(mx == y || mx == z) {
				cout<<"YES"<<endl;
				cout<<mx << " " << min(y,z) << " " <<1<<endl;
			} else cout<<"NO"<<endl;

		} else if(mx == y) {
			if(mx == x || mx == z) {
				cout<<"YES"<<endl;
				cout<<mx<<" " <<min(x,z) << " "<<1<<endl;
			} else cout<<"NO"<<endl;
		} else cout<<"NO"<<endl;

	}

	return 0;
}