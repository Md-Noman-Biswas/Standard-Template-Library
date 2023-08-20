#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int min = *min_element(v.begin() + 3, v.end());
    cout << min << "\n";
    int max = *max_element(v.begin(), v.end());
    cout << max << "\n";
    int sum = accumulate(v.begin(),v.end(),0);
    cout << sum << "\n";
    int cnt = count(v.begin(), v.end(), 6);
    cout << cnt << "\n";
    int element = *find(v.begin(), v.end(), 7);//returns the value itselt if its found
    cout << element << "\n";
}
/*
6
2 3 1 6 7 6
*/