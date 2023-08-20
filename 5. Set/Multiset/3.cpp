#include<bits/stdc++.h>
using namespace std;
void print(multiset<string> &s){
    // for(string value: s){
    //     cout << value << "\n";
    // }
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << "\n";
    }
}
int main(){
    multiset<string> s;
    //red black tree
    s.insert("abc");
    s.insert("aksd");
    s.insert("jkasd");//log(n)
    s.insert("abc");
    s.erase("abc");// passes value
    print(s);
}