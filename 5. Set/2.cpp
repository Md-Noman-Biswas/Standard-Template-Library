#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    // for(string value: s){
    //     cout << value << "\n";
    // }
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << "\n";
    }
}
int main(){
    set<string> s;
    s.insert("abc");
    s.insert("aksd");
    s.insert("jkasd");//log(n)
    s.insert("abc");
    auto it = s.find("abcd");
    if(it != s.end()){
        cout << *it;
    }
    print(s);
}