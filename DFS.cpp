/// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define db long double
#define pb push_back
#define al(x) (x).begin(), (x).end()
#define all(x) (x).rbegin(), (x).rend()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl '\n'

const int mx = 1e7+123;
const ll N = (ll) 3e5 + 5;
const ll mod = (ll) 1e9 + 7;
const ll inf = (ll) 1e18;

#define N 100005
vector<int>a[N];
int vis[N];


void Raynox(int u) {
    cout << "visiting : " << u << nl;
    vis[u] = 1;
    for(auto x : a[u]){
        if(vis[x]) continue;
        Raynox(x); 
        cout << "return to node : " << u << nl; 
    }
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        for(int i=0; i<m; i++){
            int u, v;
            cin >> u >> v;
            a[u].pb(v);
            a[v].pb(u);
        }

    Raynox(1);
    }
    return 0;
}

// coding with sakib


/*INPUTS- 
6 6
  1 2
  1 3
  2 4
  2 5
  3 5
  3 6
  
  OUTPUTS-
  visiting : 1
  visiting : 2
  visiting : 4
  return to node : 2
  visiting : 5
  visiting : 3
  visiting : 6
  return to node : 3
  return to node : 5
   return to node : 2
  return to node : 1
  */