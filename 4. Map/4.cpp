#include<bits/stdc++.h>
using namespace std;
//it is built using red black tree
void print(map<int, string> &m){
    for(auto &it : m){
        cout << it.first << " " << it.second  << "\n";
    }
} 
int main(){
    map<int,string> m;
    m[1] = "abc"; //O(log(n)) for inserting, and accessing
    m[5] = "cdc";
    m[3] = "acd";
    m[1] = "a";
    auto it = m.find(8);
    //m.erase(it);//O(log(n))
    if(it != m.end()){
        m.erase(it);
    }
    //this is to avoid segmentation fault
    //wrong location on erase function creates this error
    print(m);
}