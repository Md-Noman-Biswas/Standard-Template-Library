#include<bits/stdc++.h>
using namespace std;
void printVector(vector<pair<int,int>> &v){
    cout << "size: " << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        //v.size() -> O(1)
        cout << v[i].first << " " << v[i].second << "\n";
    }
    cout << "\n";
}
int main(){
   vector<pair<int,int> > v;
   int n;
   cin >> n;
   for(int i=0; i<n; i++){
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});//v.push_back(make_pair(x,y))
   }
   printVector(v);
}