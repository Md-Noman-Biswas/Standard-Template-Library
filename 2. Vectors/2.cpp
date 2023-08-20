#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> v){
    for(int i=0; i<v.size(); i++){
        //v.size() -> O(1)
        cout << v[i] << " ";
    }
}
int main(){
    vector<int> v(5,3);
    v.push_back(6);
    printVector(v);
}