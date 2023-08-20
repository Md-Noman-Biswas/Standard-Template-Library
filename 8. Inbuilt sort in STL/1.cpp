#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());//nlog(n)
    /*
    it is based on intro sort
    it is made with 3 algorithms
    1. quick sort
    2. hip sort
    3. insertion sort
    */
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}