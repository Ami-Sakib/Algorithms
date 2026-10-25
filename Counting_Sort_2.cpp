#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    map<int,int> mp;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    for(auto it : mp){
        int value = it.first;
        int freq = it.second;

        for(int i = 0; i < freq; i++){
            cout << value << " ";
        }
    }

    return 0;
}