/// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define db long double
#define al(x) (x).begin(), (x).end()
#define all(x) (x).rbegin(), (x).rend()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl '\n'

const int mx = 1e7+123;
const ll N = (ll) 3e5 + 5;
const ll mod = (ll) 1e9 + 7;
const ll inf = (ll) 1e18;

void Raynox() {
    int n, m;
    cin >> n >> m;
    vector<int>a[n+1];
    for(int i = 1; i<=m; i++){
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    int src = 1;
    queue<int>b;
    int lvl[n+1];

    int vis[n+1] = {0};

    lvl[src] = 0;
    b.push(src);

    vis[src] = 1;

    while(!b.empty()){
        int u = b.front();
        b.pop();
        for(int v : a[u]){
            if(vis[v]) continue;
            b.push(v);
            lvl[v] = lvl[u] + 1;
            vis[v] = 1;
        }
    }
    for(int i=1; i<=n; i++){
        cout << i << "-> " << lvl[i] << nl;
    }
    
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