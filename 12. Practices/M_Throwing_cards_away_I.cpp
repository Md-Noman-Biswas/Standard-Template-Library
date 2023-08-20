#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while(1){
    ll n;
    cin >> n;
    if(n == 0){
        break;
    }
    vector<ll> v;
    for(int i=1; i<=n; i++){
        v.push_back(i);
    }
    vector<ll> ans;
    while(v.size()>= 2){
        ans.push_back(v.front());
        v.erase(v.begin());
        int b = v.front();
        //cout << temp << "\n";
        v.push_back(b);
        v.erase(v.begin());
    }
    cout << "Discarded cards: ";
    for(int i=0; i<ans.size()-1; i++){
        cout << ans[i] << ", ";
    }
    cout << ans.back() << "\n";
    cout << "Remaining card: ";
    for(auto it: v){
        cout << it << "\n";
    }
    }
}
