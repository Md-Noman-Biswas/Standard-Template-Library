#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> &v){
    cout << "size: " << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        //v.size() -> O(1)
        cout << v[i]<< " ";
    }
    
    cout << "\n";
}
//here row and colum both are dynamic
int main(){
    int N;
    cin >> N;
    vector<vector<int> > v;
    for(int i=0; i<N; i++){
        int n;
        cin >> n;
        vector<int> temp;
        for(int j=0; j<n; j++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    v[0].push_back(10);
    v.push_back(vector<int> ());
    for(int i=0; i<v.size(); i++){
        printVector(v[i]);
    }
    cout << v[0][1];
}
/*
intput
3
3
1 2 3
3 
3 4 5
2
1 2
*/