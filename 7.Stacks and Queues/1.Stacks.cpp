#include<bits/stdc++.h>
using namespace std;
//LIFO 
// last in first out
/*
size
top
element
/*function:
push
top
pop
*/
int main(){
    stack<int> s;//o(n)
    s.push(2);
    s.push(3);
    s.push(4);
    while(!s.empty()){
        cout << s.top() << "\n";
        s.pop();
    }
}