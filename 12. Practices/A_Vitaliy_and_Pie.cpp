#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    unordered_map<char, int> m;
    for(int i=0; i< (2*n)-2; i+=2){
        m[s[i]]++;
        char ch = tolower(s[i+1]);
        auto it = m.find(ch);
        if(it != m.end()){
            if(m[ch] > 1){
                m[ch]--;
            }
            else{
                m.erase(ch);
            }
        }
        else count++;
    }
    cout << count << "\n";
}
int main(){
    solve();
}