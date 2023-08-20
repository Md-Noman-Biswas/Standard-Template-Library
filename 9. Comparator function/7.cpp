#include<bits/stdc++.h>
using namespace std;
//comparator function
//simple way -> just put in what order u want to sort
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first != b.first){
        return a.first < b.first;
    }
    return a.second > b.second;
}
//for integer
bool cmp2(int a,int b){
    return a>b;
}
int main(){
    int n;
    cin >> n;
    vector<pair<int,int> > a(n);
    for(int i=0; i<n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), cmp);
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