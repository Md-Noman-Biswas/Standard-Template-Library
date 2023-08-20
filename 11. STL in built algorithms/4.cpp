#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    //o(n)
    //on maps it becomes log(n)
    //these works on array also
    int min = *min_element(v.begin() + 3, v.end());
    cout << min << "\n";
    int max = *max_element(v.begin(), v.end());
    cout << max << "\n";
    int sum = accumulate(v.begin(),v.end(),1);
    cout << sum << "\n";
    int cnt = count(v.begin(), v.end(), 6);
    cout << cnt << "\n";
    auto it = find(v.begin(), v.end(), 90);//returns the value itselt if its found
    if(it != v.end()){
        cout << *it << "\n";
    }else{
        cout << "Element not found" << "\n";
    }
    reverse(v.begin(), v.end());
        
    for(auto val : v){
        cout << val << " ";
        }
    cout << "\n";
    string s = "aksdjsad";
    reverse(s.begin() + 1, s.end());
    cout << s << "\n";
}
/*
6
2 3 1 6 7 6
*/