#include<bits/stdc++.h>
using namespace std;
//it is built using red black tree
void print(map<int, int> &m){
    for(auto &it : m){
        cout << it.first << " " << it.second  << "\n";
    }
} 
int main(){
    map<int,int> m;
    m[6];//ny default inputs 0 for the value
    print(m);
}