#include<bits/stdc++.h>
using namespace std;
void solve(){
    int q;  cin >> q;
    int k;  cin >> k;
    long long f;  cin >> f;
    vector<pair<int, int>> prs;
    for(int i=0; i<q; i++){
        int dst; cin >> dst;
        int food; cin >> food;
        prs.push_back({k-dst, food});
    }
    sort(prs.begin(), prs.end());
    multiset<int> food_avl;
    bool can_reach = true;
    int cur = 0;
    int ans = 0;
    for(int i=1; i<k; i++){
        f--;
        if(prs[cur].first == i){
            food_avl.insert(prs[cur].second);
            cur++;
        }
        if(f == 0){
            if(food_avl.size() == 0){
                can_reach = false;
                break;
            }else{
                auto it = --food_avl.end();
                f += (*it);
                food_avl.erase(it);
                ans++;
            }
        }
    }
    if(can_reach == false){
        cout << -1 << "\n";
    }else{
        cout << ans  << "\n";
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}