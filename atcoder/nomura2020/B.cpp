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

int main() {

	char s[200001];
	int l ,i;
	scanf("%s", s);
	l = strlen(s);

	if(s[0] == '?') {

		if(l<2) {
			s[0] = 'D';
		} else {

			if(s[1] == 'D' || s[1] == '?') {
				s[0] = 'P';
			} else if(s[1] == 'P') {
				s[0] = 'D';
			}
		}
	}

	for(i = 1 ; i < l ;i++) {

		if(s[i] == '?') {

			if(s[i-1] == 'P') {
				s[i] = 'D';
			} else if(s[i-1] == 'D') {

				if(s[i+1] == '?' || s[i+1] == 'D') {
					s[i] = 'P';
				} else {
					s[i] = 'D';
				}
			}
		}
	}

	printf("%s\n", s);
	return 0;
}