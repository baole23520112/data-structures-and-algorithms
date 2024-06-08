#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int firstPos(vector<int> a, int n, int x){
    int l = 0, r = n - 1;
    int res = -1;
    while(l <= r){
        int m = (r + l) / 2;
        if (a[m] == x){
            res = m;
            r = m - 1;
        }
        else if (a[m] < x){
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return res;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x; cin >> n >> x;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    cout << firstPos(a, n, x) << endl;
    return 0;
}