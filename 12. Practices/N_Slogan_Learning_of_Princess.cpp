#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    map<string, string> mp;
    int n, q;
    cin >> n;
    string s1,s2;
    cin.ignore();
    while(n--){
        getline(cin, s1);
        getline(cin, s2);
        mp[s1] = s2;
    }
    cin >> q;
    string s3;
    cin.ignore();
    while(q--){
        getline(cin, s3);
        cout << mp[s3] << "\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}