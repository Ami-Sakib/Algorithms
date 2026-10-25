#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define pb push_back
#define al(x) (x).begin(), (x).end()
#define all(x) (x).rbegin(), (x).rend()
#define ve vector<int>a(n)
#define rep(a,n) for(int i=(a); i<(n); i++)
#define tc ll t; cin >> t; while(t--)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl '\n'
void Raynox(){
    int n;
    cin >> n;
    map<int,int>a;
    for(int i=0;i<n;i++){
        int x ;
        cin >> x;
        a[x]++;
    }
    rep(0,100) cout << a[i] << (i==99? "" : " ");

}
int main() {
    fast;
    Raynox();
    return 0;
}