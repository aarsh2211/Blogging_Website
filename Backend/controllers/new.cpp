#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= a; i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> pii;
typedef double db;
#define int long long
mt19937 mrand(random_device{}());
const ll mod = 998244353;
int rnd(int x) { return mrand() % x; }
ll powmod(ll a, ll b)
{
    ll res = 1;
    a %= mod;
    assert(b >= 0);
    for (; b; b >>= 1)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
    }
    return res;
}
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define Adios return 0;
#define FASTIO std::ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
const int N = 2e5 + 5;
bool isPerfectSquare(ll n)
{
    ll s = sqrt(n);
    return (s * s == n);
}
void solve()
{
    ll n;
    cin >> n;
    cout << isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}
signed main()
{
    FASTIO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    Adios;
}