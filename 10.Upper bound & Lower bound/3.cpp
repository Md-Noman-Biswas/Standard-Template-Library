#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++){
        cout << a[i] << "\n";
    }
    //log(n) 6
    auto it  = upper_bound(a.begin(),a.end(),7);// returns higher
    if(it == a.end()) cout << "Not found" << "\n";
    else cout << *it << "\n";
}
/*
4 5 5 25 7 8
*/