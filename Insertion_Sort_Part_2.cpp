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
void Raynox(vector<int>&a,int n){
    for(int i=1; i<n; i++){
        int cur = a[i];
        int prev = i-1;
        while(prev>=0 && a[prev] > cur){
            a[prev+1] = a[prev];
            
            prev--;
        }
        a[prev+1] = cur;

        for(int j=0; j<n; j++){
                cout << a[j] << (j==n-1?"" : " ");
            }
            cout << nl;
    }
}
int main() {
    fast;
    int n;
    cin >> n;
    vector<int>a(n);
    for(int & x : a) cin >> x;
    Raynox(a,n);
    //rep(0,n) cout << a[i] << (i==n-1? "" : " ");
    return 0;
}