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
int sorting(vector<int>&a,int n,int m){
    int p=a[n];
    int i=0;
    int j=m-1;
    while(i<=j){
        while(i<=m && a[i]<=p){
            i++;
        }
        while(j>=n && a[j] > p){
            j--;
        }
        if(i<j) swap(a[i],a[j]);
        
    }
    swap(a[n],a[j]);
    return j;
}
void Raynox(vector<int>&a,int n,int m){
    if(n<m){
        int pi = sorting(a,n,m);
        Raynox(a,n,pi-1);
        Raynox(a,pi+1,m);
    }

}
int main() {
    fast;
    int x;
    cin >> x;
    vector<int>a(x);
    for(int &x : a) cin >> x;
    Raynox(a,0,x-1);
    for(int x : a) cout << x << " ";
    return 0;
}