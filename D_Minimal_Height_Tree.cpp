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
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int i = 1, cur = 1, ans = 0, nxt = 0;
    while(n>i){
        ans += 1;
        while(cur--){
            nxt += 1;
            while(i+1<n && a[i] < a[i+1]){
                nxt += 1;
                i += 1;
            }
            i+=1;
            if( i >= n) break;
        }
        cur = nxt;
        nxt = 0;
    }
    cout << ans << nl;

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