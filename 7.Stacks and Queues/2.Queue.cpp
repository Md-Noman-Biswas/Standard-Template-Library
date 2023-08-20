#include<bits/stdc++.h>
using namespace std;
//fIFO 
//first in first out
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
    queue<string> s;
    s.push("akkd");
    s.push("akdj");
    s.push("skd");
    while(!s.empty()){
        cout << s.front() << "\n";
        s.pop();
    }
}