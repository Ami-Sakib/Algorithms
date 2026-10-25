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
void Raynox(vector<int>&a){
    int n = a.size(),cnt = 0;
    bool ok;
    for(int i=0; i<n-1; i++){
        ok = false;
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                cnt+=1;
                ok = true;
            }
        }
        if(!ok) break;
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << nl;
    //cout << "Array is sorted in " << cnt << " swaps." << nl;
    cout << cnt << nl;
}
int main() {
    fast;
    int n;
    cin >> n;
    vector<int>a(n);
    for(int &x : a) cin >> x;
    //int k = *max_element(al(a));
    //int l = *min_element(al(a));
    Raynox(a);
    
    //cout << "First Element: " << l << nl;
    //cout << "Last Element: " << k << nl;
    return 0;
}