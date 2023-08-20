#include<bits/stdc++.h>
using namespace std;
void solve(){
    map<string, int> m;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        m[s]++;
    }
    for(auto it: m){
        cout << it.first << " " << it.second << "\n";
    }
}
int main(){
    solve();
}