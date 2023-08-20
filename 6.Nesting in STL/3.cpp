#include<bits/stdc++.h>
using namespace std;
int main(){
    map<pair<string, string>, vector<int>> m;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string fn,ln;
        int cnt;
        cin >> fn >> ln >> cnt;
        for(int j=0; j<cnt; j++){
            int x;
            cin >> x;
            m[{fn,ln}].push_back(x);
        }
    }
    for(auto &it: m){
        auto &full_name = it.first;
        auto &list = it.second;
        cout << full_name.first << " " << full_name.second << "\n";
        cout << list.size() << "\n";
        for(auto &element: list){
            cout << element << " ";
        }
        cout << "\n";
    }
}
