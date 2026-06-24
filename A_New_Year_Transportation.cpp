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

void Raynox() {
    int n, m;
    cin >> n >> m;
    vector<int>a[n+1];
    for(int i=1; i<n; i++){
        int x;
        cin >> x;
        a[i].pb(i+x);
    }
    vector<int>vis(n+1, 0);
    queue<int>s;
    s.push(1);
    vis[1] = 1;
    while(!s.empty()){
        int u = s.front();
        s.pop();
        for(int x : a[u]){
            if(vis[x]) continue;
            s.push(x);
            vis[x] = 1;
        }

    }
    (vis[m])? yes : no;
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