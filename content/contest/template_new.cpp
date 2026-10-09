#include <bits/stdc++.h>
using namespace std;
//#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4.1,sse4.2,avx,avx2,popcnt,tune=native")
/* compile flag:
g++ -std=c++14 -O2 -Wall -Wextra -pedantic -Wfloat-equal -Wshadow  -Wcast-align
-Wformat=2 -Wconversion -Wlogical-op -Wshift-overflow=2 -Wduplicated-cond -Wcast-qual
-D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC -ggdb3 test.cpp -o test

Open stack: Linker settings > other linker option: -Wl,--stack=67108864
*/
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

#define FOR(i,a,b) for (int i = (a); i <= (b); ++i)
#define RFOR(i,a,b) for (int i = (a); i >= (b); --i)
#define rep(i, a, b) for(int i = a; i < (b); ++i)

#define all(x) begin(x), end(x)
#define rall(a) rbegin(x), rend(x)

#define MP make_pair
#define F first
#define S second
#define ff first
#define ss second
#define PB push_back
#define pb push_back
#define sz(x) (int)(x).size()

#define y1 y1_____

mt19937_64 rd(chrono::steady_clock::now().time_since_epoch().count());
ll rnd(ll l, ll r) {
    return l + (ll)((unsigned long long)rd() % (unsigned long long)(r-l+1));
}

int test = 1;
const int MAXN = 0;

void solve() {

}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cin >> test;
    while (test--) {
        solve();
    }
	return 0;
}
