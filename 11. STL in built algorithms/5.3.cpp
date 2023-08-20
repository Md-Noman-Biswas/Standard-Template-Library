#include<bits/stdc++.h>
using namespace std;
bool is_positive(int x){
    return x>0;
}
int main(){
    vector<int> v = {-2,-3,-5};
    //works on arrays too
    cout << all_of(v.begin(), v.end(),[](int x){return x>0;});
    //all elements are positive
    cout << "\n";
    cout << any_of(v.begin(), v.end(), [](int x){return x<0;});
    cout << "\n";
    cout << none_of(v.begin(), v.end(),[](int x){return x>0;});
    cout << "\n";
    cout << none_of(v.begin(), v.end(),[](int x){return x%2 == 0;});
}