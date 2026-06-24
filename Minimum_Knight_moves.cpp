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


int dx[] = {2,2,-2,-2,1,1,-1,-1};
int dy[] = {1,-1,1,-1,2,-2,2,-2};

void Raynox() {
    string a, s;
    cin >> a >> s;
    int a0 = a[0] - 'a';
    int a1 = a[1] - '1';
    int s0 = s[0] - 'a';
    int s1 = s[1] - '1';
    int vis[8][8];
    memset(vis, 0, sizeof vis);
    queue<pair<int,int>>q;
    q.push({a0,a1});
    vis[a0][a1] = 1;
    while(!q.empty()){
        auto u = q.front();
        q.pop();
        int x = u.first;
        int y = u.second;

        if(x == s0 && y == s1){
            cout << vis[x][y] - 1 << nl;
            return ;
        }
        for(int k=0; k<8; k++){
            int r = x+dx[k];
            int c = y+dy[k];
            if(r >=0 && r < 8 && c >=0 && c<8 && vis[r][c] == 0){
                vis[r][c] = vis[x][y] + 1;
                q.push({r,c});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    Raynox();
    }
    return 0;
}

// coding with sakib