#include<bits/stdc++.h>
using namespace std;
//it is built using hash table
void print(unordered_map<int, string> &m){
    for(auto &it : m){
        cout << it.first << " " << it.second  << "\n";
    }
} 
int main(){
    //inbuilt implementation
    //time complexity
    //valid keys datatype
    unordered_map<int,string> m;
    //pair doesnt have any hash value, so pair cant be stored it unordered map
    m[1] = "abc"; //O(1)
    m[5] = "cdc";
    m[3] = "acd";
    m[1] = "a";
    auto it = m.find(7);//O(1)
    //m.erase(it);//O(log(n))
    if(it != m.end()){
        m.erase(it);//O(1)
    }
    //m.clear();
    //this is to avoid segmentation fault
    //wrong location on erase function creates this error
    print(m);
}