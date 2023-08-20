#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        //v.size() -> O(1)
        cout << v[i] << " ";
    }
    v.push_back(2);//it gets copied here which is an expensive operation
    cout << "\n";
}
int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(6);
    vector<int> v2 = v;//O(n)
    v2.push_back(5);
    printVector(v);
    cout << "\n";
    printVector(v2);//O(1)
}