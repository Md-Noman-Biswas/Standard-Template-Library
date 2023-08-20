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
   vector<pair<int,int> > v ={{1,2},{2,3},{3,4}};
   printVector(v);
}