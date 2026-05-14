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

void hanoi(int n, char a, char b, char c) {
    if(n == 1) {
        cout << a << " -> " << c << nl;
        return;
    }

    hanoi(n - 1, a, c, b);

    cout << a << " -> " << c << nl;

    hanoi(n - 1, b, a, c);
}

void Raynox() {
    int n;
    cin >> n;

    cout << (1LL << n) - 1 << nl;

    hanoi(n, 'A', 'B', 'C');
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