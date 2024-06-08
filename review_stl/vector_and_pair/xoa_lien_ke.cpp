#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<int> unique_vector(vector<int> v){
    vector<int> temp;
    temp.push_back(v[0]);
    for (int i = 1; i < v.size(); i++){
        if (v[i] != v[i - 1])
            temp.push_back(v[i]);
    }
    return temp;
}

vector<int> nhap(){
    int n; cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    return a;
}

void in(vector<int> v){
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v = nhap();
    vector<int> res = unique_vector(v);
    in(res);
    return 0;
}