#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int> symbols = {{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
string isBalanced(string s){
    stack<char> st;
    // if(s[i] == '[' || s[i] == '{' || s[i] == '('){
    // if(s[i] == ']' && st.top() == '[');
    // }
    for(char bracket : s){
        if(symbols[bracket] < 0){//symbol[bracket]  is key and returns value
            st.push(bracket);
        }else{
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if(symbols[top] + symbols[bracket] != 0){
                return "NO";
            }
        }
    }
    if(st.empty()) return "YES";
    return "NO";
}
//this code works in hackerrank's compiler
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << isBalanced(s) << "\n";
    }
}