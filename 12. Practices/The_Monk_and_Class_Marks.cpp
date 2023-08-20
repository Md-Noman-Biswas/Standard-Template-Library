#include<bits/stdc++.h>
using namespace std;
void solve(){
    map<int,multiset<string> > marks_map;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int marks;
        string name;
        cin >> name >> marks;
        marks_map[marks].insert(name); 
    }
    auto current_it = --marks_map.end();
    while(true){
        auto &students = (*current_it).second;
        int marks = (*current_it).first;
        for(auto student : students){
            cout << student << " " << marks << "\n";
        }
        if(current_it == marks_map.begin()) break;
        current_it--;
    }
}
int main(){
    solve();
}