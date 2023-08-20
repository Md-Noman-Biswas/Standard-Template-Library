/*6.Given N strings and Q queries, print
frequency of the string.
 N <= 10^6
 |s| <= 100
 Q <= 10^6
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<string> s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        s.insert(str);
    }
    for(auto value: s){
        cout << value << "\n";
    }
}