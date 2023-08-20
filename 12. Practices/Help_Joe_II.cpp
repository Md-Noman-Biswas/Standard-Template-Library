#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
long long arr[N];
int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        arr[i] %= m;
    }
    sort(arr, arr + n);
    int q; cin >> q;
    while(q--){
        long long x;
        cin >> x;
        x %= m;
        long long *ptr = upper_bound(arr,arr+n,m-x-1);
        if(ptr != arr){
            ptr--;
        }
        cout << max((*ptr + x) % m, (arr[n-1] + x) % m);
        cout << "\n";
    }
}