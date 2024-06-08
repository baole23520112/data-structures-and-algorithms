#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int value(vector<int> a, int n, int x){
    int res = -1; 
    int r = n - 1, l = 0;
    while(l <= r){
        int m = (r + l) / 2;
        if (a[m] == x){
            res = a[m];
            return res;
        }
        else if (a[m] < x){
            res = a[m];
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
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    int ans = value(a, n, x);
    if (ans == -1) {
        cout << "NOT FOUND";
    }
    else cout << ans;
    return 0;
}