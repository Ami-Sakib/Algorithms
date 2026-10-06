/// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define db long double
#define pb push_back
#define al(x) (x).begin(), (x).end()
#define all(x) (x).rbegin(), (x).rend()
#define tr(x) transform((x).begin(), (x).end(), (x).begin(), ::toupper)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl '\n'

const int mx = 1e7+123;
const ll M = (ll) 3e5 + 5;
const ll mod = (ll) 1e9 + 7;
const ll inf = (ll) 1e18;

const ll N = 1e5 + 7;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

vector<pair<ll, ll >>a[N];
ll dis[N], pre[N];
vector<int>pp;

void path(int n){
    pp.pb(n);
    if(n == 1) return;
    path(pre[n]);
}

void Raynox() {
    int n, m;
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        a[u].pb({w, v});
        a[v].pb({w,u});
    }
    set<pair<ll, ll>>s;
    int src = 1;
    
    for(int i=1; i<=n; i++){
        dis[i] = inf;
    }
    dis[src] = 0;
    for(int i=1; i<=n; i++) s.insert({dis[i], i});
    while(s.size()){
        pair<ll,ll>u = *s.begin();
        s.erase(u);
        ll d = u.first;
        ll cur = u.second;
        for(pair<ll, ll>x : a[cur]){
            ll wei = x.first;
            int next = x.second;
            if(d+wei < dis[next]){
                pre[next] = cur;
                s.erase({dis[next], next});
                dis[next] = d+wei;
                s.insert({dis[next], next});
            }
        }
    }
    if(dis[n] == inf){
        cout << -1 << nl;
        return;
    }
    //pp.clear();
    path(n);
    reverse(al(pp));
    for(int i=0; i<pp.size(); i++){
        cout << pp[i] << " ";
    }
    cout << nl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) {
    Raynox();
    }
    return 0;
}

// coding with sakib

