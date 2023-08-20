#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int> s;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    /* auto it = lower_bound(s.begin(), s.end(), 5);
    this code works but will get tle for interner behaviour sometimes
    */
   auto it = s.lower_bound(7);
   cout << *it << "\n";
   //1 2 8 3 4 5


}