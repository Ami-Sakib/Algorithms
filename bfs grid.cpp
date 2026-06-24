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

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

void Raynox() {
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    int vis[n][m];
    memset(vis,0,sizeof vis);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(vis[i][j]) continue;
            queue<pair<int,int>>q;
            q.push({i,j});
            vis[i][j] = 1;
            cnt += 1;
            while(!q.empty()){
                pair<int,int>u = q.front();
                q.pop();
                int x = u.first;
                int y = u.second;
                for(int k=0; k<4; k++){
                    int r = x+dx[k];
                    int c = y+dy[k];
                    if(r>=0 && r<n && c>=0 && c<m){
                        if(a[r][c]==',' && vis[r][c]==0){
                            q.push({r,c});
                            vis[r][c] = 1;
                        }
                    }
                }

            }
        }
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