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

const ll N = (ll) 3e5 + 5;
const ll mod = (ll) 1e9 + 7;
const ll inf = (ll) 1e18;
int a[50][50];

void Raynox() {
    int n;
    cin >> n;
    int i = n/2;
    int j = n-1;
    for(int k = 1 ; k <= n * n; k++){
        a[i][j] = k;
        i = i - 1;
        j = j + 1;
        if(i == -1 && j == n) {
            i = 0 ; j = n-2;
        }
        else {
            if(i == -1) i = n - 1;
            if(j == n) j = 0;
            if(a[i][j] > 0) {
                i = i + 1;
                j = j - 2;
            }
        }
    }   
    for(int x = 0; x < n; x++){
        for(int y = 0 ; y < n ; y++) {
            cout << a[x][y] << " ";
        }
        cout << nl;
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