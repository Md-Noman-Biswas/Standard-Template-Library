#include<bits/stdc++.h>
using namespace std;
//comparator function
bool should_i_swap(pair<int,int> a, pair<int,int> b){
    if(a.first != b.first){
        if(a.first > b.first) return true;
        return false;
    }
    if(a.second < b.second) return true;
    return false;
}
int main(){
    int n;
    cin >> n;
    vector<pair<int,int> > a(n);
    for(int i=0; i<n; i++){
        cin >> a[i].first >> a[i].second;
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(should_i_swap(a[i],a[j])){
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << a[i].first << " " << a[i].second << "\n";
    }
    cout << "\n";
    /*
6
4 3
5 5
5 3
25 6
7 9
8 5 
*/
}