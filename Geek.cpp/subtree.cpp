#pragma GCC optimize("Ofast", "unroll-loops", "omit-frame-pointer", "inline") //Optimization flags
#pragma GCC option("arch=native", "tune=native", "no-zero-upper")             //Enable AVX
#pragma GCC target("avx2")    

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

class hashing_pair
{
    public:
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2> &p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};

void depth_2(ll node, ll pair_, vector<vector<ll>> &G, vector<ll> &T, vector<ll> &S, vector<ll> &C, unordered_map<pair<ll, ll>, ll, hashing_pair> &cont_dp, unordered_map<pair<ll, ll>, ll, hashing_pair> &Cdp, ll n)
{
    T[node] = T[pair_] + n - 2 * C[node];
    for (auto x : G[node])
        if (x != pair_)
        {
            depth_2(x, node, G, T, S, C, cont_dp, Cdp, n);
            Cdp[make_pair(node, x)] = C[x];
            cont_dp[make_pair(node, x)] = S[x];
            cont_dp[make_pair(x, node)] = T[node] - S[x] - C[x];
        }
    Cdp[make_pair(node, pair_)] = n - C[node];
}

void depth_1(ll node, ll pair_, vector<vector<ll>> &G, vector<ll> &S, vector<ll> &P, vector<ll> &C, vector<ll> &L, ll curlev)
{
    C[node] = 1;
    P[node] = pair_;
    L[node] = curlev;
    for (auto x : G[node])
    {
        if (x != pair_)
        {
            depth_1(x, node, G, S, P, C, L, curlev + 1);
            C[node] += C[x];
            S[node] += S[x] + C[x];
        }
    }
}

void shift_by(ll &u, ll dist, vector<vector<ll>> &Pdp)
{
    for (ll i = 20; i >= 0; i--)
        if (dist >= (1 << i) )
        {
            dist -= (1 << i);
            u = Pdp[u][i];
        }
}

ll Get_lca(ll a, ll b, vector<vector<ll>> &Pdp, vector<ll> &L)
{
    ll u = a, v = b;
    if (L[u] > L[v])
        shift_by(u, L[u] - L[v], Pdp);
    if (L[u] < L[v])
        shift_by(v, L[v] - L[u], Pdp);

    if (u == v)
        return u;

    for (int i = 19; i >= 0; i--)
        if (Pdp[u][i] != 0 && Pdp[u][i] != Pdp[v][i])
            u = Pdp[u][i], v = Pdp[v][i];
    u = Pdp[u][0];
    return u;
}

void get_mid(ll &a, ll &b, vector<vector<ll>> &Pdp, vector<ll> &L, vector<ll> &v)
{
    ll lca = Get_lca(a, b, Pdp, L);
    ll dist = abs(L[lca] - L[a]) + abs(L[lca] - L[b]);
    ll mva = (dist - 1) / 2, mvb;
    ll m1 = a, m2;
    shift_by(m1, mva, Pdp);
    mvb = dist - 1 - mva;
    m2 = b;
    if (m1 != lca)
        m2 = Pdp[m1][0];
    else
    {
        shift_by(m2, mvb, Pdp);
    }
    v[0] = m1;
    v[1] = m2;
    v[2] = mva;
    v[3] = mvb;
}

void get_route(ll a, ll b, vector<vector<ll>> &Pdp)
{
    cout << "[A] " << a << " ";
    while (Pdp[a][0] != 0)
    {
        a = Pdp[a][0];
        cout << a << " ";
    }
    cout << "\n";

    cout << "[B] " << b << " ";
    while (Pdp[b][0] != 0)
    {
        b = Pdp[b][0];
        cout << b << " ";
    }
    cout << "\n";
}
void solve(vector<vector<ll>> &G, int n, int q)
{
    vector<ll> S(n + 1, 0), P(n + 1, 0), C(n + 1, 0), T(n + 1, 0), L(n + 1, 0);
    unordered_map<pair<ll, ll>, ll, hashing_pair> cont_dp, Cdp;
    depth_1(1, 0, G, S, P, C, L, 1);

    T[0] = S[1] + C[1];
    depth_2(1, 0, G, T, S, C, cont_dp, Cdp, n);
    vector<vector<ll>> Pdp(n + 1, vector<ll>(20, 0));
    for (int node = 1; node <= n; node++)
        Pdp[node][0] = P[node];
    for (int j = 1; j < 20; j++)
        for (int node = 1; node <= n; node++)
            Pdp[node][j] = Pdp[Pdp[node][j - 1]][j - 1];
    vector<ll> v(4, 0);
    ll a, b, ans = 0;
    for(int i=0;i<q;i++)
    {
        cin >> a >> b;
        if (L[a] < L[b])
            swap(a, b);
        get_mid(a, b, Pdp, L, v);
        ll m1 = v[0], m2 = v[1], da = v[2], db = v[3];
        ll conta = T[a] - (da + 1) * Cdp[{m1, m2}] - cont_dp[{m1, m2}];
        ll contb = T[b] - (db + 1) * Cdp[{m2, m1}] - cont_dp[{m2, m1}];
        ans = conta + contb;
        cout << ans << "\n";
    }
}

void start()
{
    ll n, q;
    cin >> n >> q;
    vector<vector<ll>> G(n + 1);
    ll x, y;
    for (int i = 1; i < n; i++)
    {
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    solve(G, n, q);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        start();
    }
    return 0;
}