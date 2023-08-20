#include<bits/stdc++.h>
using namespace std;

void solve(){
    multiset<int> st;
    int n; cin >> n;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        st.insert(x);
    }
    int m; cin >> m;
    for(int i=0; i<m; i++){
        int p;
        cin >> p;
        int count_p = st.count(p);
        while(count_p--){
            cout << p << " ";
        }
        st.erase(p);
    }
    for(auto it: st){
        cout << it << " ";
    }
    cout << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}