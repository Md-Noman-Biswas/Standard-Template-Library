#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> v){
    for(int i=0; i<v.size(); i++){
        //v.size() -> O(1)
        cout << v[i] << " ";
    }
}
int main(){
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);//O(1)
    }
    printVector(v);
}