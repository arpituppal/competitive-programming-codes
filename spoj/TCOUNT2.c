#include<stdio.h>
int main()
{
long long int t;
long double n;
scanf("%lld", &t);
while(t--)
{
scanf("%Lf", &n);
printf("%.0Lf\n", n/2.0 * (7.0*n*n + 4.5*n + 1.0));
}
return 0;
}
