#include<bits/stdc++.h>
using namespace std;
void solve(int t){
    vector<pair<int,int>> points(t);
    //not using unorders set because it doesnt work on pair
    set<pair<int,int>> points_st;
    for(int i=0; i<t; i++){
        cin >> points[i].first >> points[i].second;
        points_st.insert(points[i]);
    }
    int ar_min = INT_MAX;
    int ar_max = INT_MIN;
    int area;
    for(int i=0; i<t; i++){
        for(int j=0; j<t; j++){
            auto p1 = points[i];
            auto p2 = points[j];
            if(p1.first == p2.first) continue;
            if(p2.second == p1.second) continue;
            if(p1.first > p1.second) swap(p1,p2);
            int x1 = p1.first;
            int y1 = p2.second;
            int x2 = p2.first;
            int y2 = p1.second;
            if(points_st.count({x1,y1}) && points_st.count({x2,y2})){
                area = abs(x1-x2) * abs(y1-y2);
                ar_min = min(ar_min, area);
                ar_max = max(ar_max, area);
            }
        }
    }
    if(ar_max != INT_MIN){
        cout << ar_max - ar_min << "\n";
    }else{
        cout << -1 << "\n";
    }
}
int main(){
    int t;
    cin >> t;
    solve(t);
}