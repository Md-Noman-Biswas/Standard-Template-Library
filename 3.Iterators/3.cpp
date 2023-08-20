#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int> > v_p = {{1,2},{2,3},{3,5},{5,6},{7,7}};
    vector<pair<int,int>> :: iterator it;
    for(it = v_p.begin(); it != v_p.end(); it++){
        //cout << (*it).first << " " << (*it).second << "\n";
        cout << it->first << " " << it->second << "\n"; 
    }

}