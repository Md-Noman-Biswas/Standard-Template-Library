#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int,int> > a(n);
    for(int i=0; i<n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), greater<pair<int,int> >());
    //inbuit function wants false to swap, thats why it does reverse
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