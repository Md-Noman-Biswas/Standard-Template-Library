#include<bits/stdc++.h>
using namespace std;
//it is built using red black tree
//map<key,value> x;
//stores in sorted order
//takes duplicate vlaue
void print(map<int, string> &m){
    for(auto &it : m){
        cout << it.first << " " << it.second  << "\n";
    }
} 
int main(){
    map<int,string> m;
    m[1] = "abc"; //O(log(n))
    m[5] = "cdc";
    m[3] = "abc";
    m.insert({4,"afg"});
    print(m);
}