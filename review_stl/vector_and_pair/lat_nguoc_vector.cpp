#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void nhap(vector<int> &a){
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
}

void rev(vector<int> &v){
    reverse(v.begin(), v.end());
}

void in(vector<int> a){
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << ' ';
    }
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v;
    nhap(v);
    rev(v);
    in(v);
    return 0;
}