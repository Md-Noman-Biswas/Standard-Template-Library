#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    int a[n] = {4,5,5,7,8,25};
    //log(n)
    int *ptr = lower_bound(a,a+n,7);// returns that one or higher
    if(ptr == (a+n)) cout << "Not found" << "\n";
    else cout << (*ptr) << "\n";
}