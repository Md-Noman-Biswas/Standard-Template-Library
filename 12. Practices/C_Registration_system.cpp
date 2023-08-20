#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t;
    cin >> t;
    string s;
    map<string,int> reg;
    while(t--){
    cin >> s;
    if(reg[s] == 0){
        reg[s] = 1;
        cout << "OK" << "\n";
    }else{
        cout<< s << reg[s] << "\n";
        reg[s]++;
    }
    } 
}
int main(){
    solve();
}