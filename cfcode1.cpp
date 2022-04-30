#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <vector>
#include <string>
#define INF 0x3f3f3f3f
#define eps 1e-8
#define MAXN (1000+10)
#define MAXM (200000+10)
#define Ri(a) scanf("%d", &a)
#define Rl(a) scanf("%lld", &a)
#define Rf(a) scanf("%lf", &a)
#define Rs(a) scanf("%s", a)
#define Pi(a) printf("%d\n", (a))
#define Pf(a) printf("%.2lf\n", (a))
#define Pl(a) printf("%lld\n", (a))
#define Ps(a) printf("%s\n", (a))
#define W(a) while((a)--)
#define CLR(a, b) memset(a, (b), sizeof(a))
#define MOD 1000000007
#define LL long long
#define lson o<<1, l, mid
#define rson o<<1|1, mid+1, r
#define ll o<<1
#define rr o<<1|1
#define PI acos(-1.0)
using namespace std;
int main()
{
    int x; Ri(x);
    int num = x / 5 + 1;
    if(x % 5 == 0)
        num--;
    Pi(num);
    return 0;
}