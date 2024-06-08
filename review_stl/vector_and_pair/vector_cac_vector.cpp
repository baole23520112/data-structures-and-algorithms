#include <bits/stdc++.h>
using namespace std;

using ll = long long;


void nhap(vector<vector<int>> &v, int n, int m){
    for (int i = 0; i < n; i++){
        vector<int> temp;
        for (int j = 0; j < m; j++){
            int x; cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
}

void xuat(vector<vector<int>> v, int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}

void lat(vector<vector<int>> &v, int n, int m){
    for (int i = 0; i < n; i++){
        reverse(v[i].begin(), v[i].end());
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m; cin >> n >> m;
    vector<vector<int>> v;
    nhap(v, n, m);
    lat(v, n, m);
    xuat(v, n, m);
}