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
    int cnt = 0;
    for(int i=0;i<n-1;i++){
        int min_ind = i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[min_ind]){
                min_ind = j;
            }
        }
        if(i != min_ind){
            swap(a[i], a[min_ind]);
            cnt++;
        }
    }
    for(int i=0;i<n;i++){
        cout << a[i] << (i== n-1? "" : " ");
    }cout << nl << cnt << nl;
}
int main() {
    fast;
    int n;
    cin  >> n;
    vector<int>a(n);
    for(int &x : a) cin >> x;
    Raynox(a,n);
    return 0;
}