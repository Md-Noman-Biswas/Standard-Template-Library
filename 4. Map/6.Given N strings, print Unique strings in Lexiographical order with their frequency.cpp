/*6.Given N strings and Q queries, print
frequency of the string.
 N <= 10^6
 |s| <= 100
 Q <= 10^6
*/
#include<bits/stdc++.h>
using namespace std;
void solve(){
    unordered_map<string, int> m;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        m[s]++;
    }
    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        cout << m[s] << "\n";
    }
}
int main(){
    solve();
}