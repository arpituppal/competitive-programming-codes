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
inline void inp( int &n )
{
n=0; int ch=getcx();int sign=1;
while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}
while( ch >= '0' && ch <= '9' )
n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
n=n*sign;
}
inline void inp1( LL &n )
{
n=0; LL ch=getcx();LL sign=1;
while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}
while( ch >= '0' && ch <= '9' )
n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
n=n*sign;
}

int arr[1000000];
char ans[100000];
int main()
{
	int t;
	inp(t);
	while(t--)
	{
		int i=0,n,j,k=0;
		inp(n);
		while(n>0)
		{
			arr[i++]=n%3;
			n/=3;
		}
		arr[i++]=0;
		//for(j=0;j<i;j++)
		//printf("%d ",arr[j]);
		//printf("\n");
		for(j=0;j<i;j++)
		{
			if(arr[j]==0)
			ans[k++]='0';

			else if(arr[j]==1)
			ans[k++]='+';

			else if(arr[j]==2)
			{
				arr[j]=-1;
				arr[j+1]++;
				ans[k++]='-';
			}
			else if(arr[j]==3)
			{
				arr[j]=0;
				arr[j+1]++;
				ans[k++]='0';
			}
		}
		if(ans[k-1]=='0')
		k--;
		for(i=k-1;i>=0;i--)
		printf("%c",ans[i]);
		printf("\n");
	}
	return 0;
}
