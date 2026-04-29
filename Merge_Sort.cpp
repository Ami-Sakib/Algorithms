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
ll n,a[500005],temp[500005],cnt=0;
void marge(int l,int r){
    int mid = (l+r)/2;
    int i1=l,i2=mid+1,j=l;
    while(i1<=mid && i2 <=r){
        cnt+=1;
        if(a[i1]<=a[i2]){
            temp[j]=a[i1];
            i1++;
        }
        else {
            temp[j]=a[i2];
            i2++;
        }
        j++;
    }
    while(i1<=mid){
        cnt+=1;
        temp[j]=a[i1];
        j++,i1++;
    }
    while(i2<=r){
        cnt+=1;
        temp[j]=a[i2];
        j++,i2++;
    }
    for(int j=l;j<=r;j++){
        a[j]=temp[j];
    }
}
void Raynox(int l, int r){
    if(l==r) return;
    int mid = (l+r)/2;
    Raynox(l,mid);
    Raynox(mid+1,r);
    marge(l,r);
}
int main() {
    fast;
    int n;
    cin >> n;
    rep(0,n) cin >> a[i];
    Raynox(0,n-1);
    rep(0,n) {
        cout << a[i] ;
        if(i!=n-1) cout << " ";
    }
    cout << nl << cnt << nl;
    return 0;
}