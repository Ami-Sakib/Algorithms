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

void Raynox() {
    int n;
    cin >> n;
    
    priority_queue<int>a; // by defult big to small 

    // For an ascending order priority queue 

    priority_queue<int, vector<int>, greater<int>> a;

    for(int i = 0;i < n; i++){
        int x;
        cin >> x;
        a.push(x);
    }
    while(!a.empty()){
        cout << a.top() << " ";
        a.pop();
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