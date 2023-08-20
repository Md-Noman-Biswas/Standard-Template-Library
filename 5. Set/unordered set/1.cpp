/*
Given N strings and Q queries in each query you are 
given a string print yes if string is present else print no.
*/
#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<string> s;
    //built on hash table
    //cant stores pair,set,vector etc
    //only basic data type accepted
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        s.insert(str);
    }
    int q; 
    cin >> q;
    while(q--){
        string str;
        cin >> str;
        if(s.find(str) == s.end()){
            cout << "NO" << "\n";
        }else{
            cout << "YES" << "\n";
        }
    }
}