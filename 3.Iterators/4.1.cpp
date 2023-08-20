#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2,3,4,5,6,7};
    //ranged based loops
    for(int &value : v){
        value++;
    }
    vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4},{4,5}};
    for(pair<int,int> &value : v_p){
        cout << value.first << " " << value.second << "\n";
    }
    for(int value : v){
        cout << value << " ";
    }
}

