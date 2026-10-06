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

const ll N = 1e7;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

vector<pair<ll, ll>>a[2*M];
ll dis[2*M], pre[2*M];
vector<int>path;

void path_print(int n){
    path.pb(n);
    if(n==1) return;
    path_print(pre[n]);
}
void Raynox() {
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        a[u].pb({w, v});
        a[v+n].pb({w, u+n});
    }
    int src = 1;
    for(int i=1; i<=n; i++) a[i].pb({0, i+n});
    for(int i=1; i<= 2*n; i++){
        dis[i] = inf;
    }
    dis[src] = 0;
    set<pair<ll, ll>>st;
    for(int i=1; i<=n; i++){
        st.insert({dis[i], i});
    }
    while(st.size()){
        pair<ll, ll>p = *st.begin();
        st.erase(p);
        ll d = p.first;
        int cur_node = p.second;
        for(pair<ll, ll>x : a[cur_node]){
            int next_node = x.second;
            ll weight = x.first;
            if(d+weight < dis[next_node]){
                pre[next_node] = cur_node;
                st.erase({dis[next_node], next_node});
                dis[next_node] = d+weight;
                st.insert({dis[next_node], next_node});
            }
        }
    }
    for(int i=n+2; i<=2*n; i++){
        cout << (dis[i] != inf ? dis[i] : -1) << " ";
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