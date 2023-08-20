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
    auto it = m.find(9);
    //if this function doesn't find any value, it returns m.end() 
    if(it == m.end()){
        cout << "No Value" << "\n";
    }else{
        cout << it->first << " " << it->second << "\n"; 
    }
    
    print(m);
}