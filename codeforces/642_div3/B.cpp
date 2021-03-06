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

		int n, k, i, j, swaps = 0, sum = 0, arr[100], b[100];
		cin>>n>>k;

		for(i = 0 ; i < n; i++) {
			cin>>arr[i];
			sum += arr[i];
		}

		for(i = 0 ; i < n; i++) {
			cin>>b[i];
		}
		
		sort(arr, arr+n);
		sort(b, b+n);
		i = 0;
		j = n-1;

		while(b[j] > arr[i] && j >=0 && i<n && swaps < k) {

			swaps++;
			sum = sum - arr[i] + b[j];
			i++;
			j--;
		}

		printf("%d\n", sum);

	}

	return 0;

}