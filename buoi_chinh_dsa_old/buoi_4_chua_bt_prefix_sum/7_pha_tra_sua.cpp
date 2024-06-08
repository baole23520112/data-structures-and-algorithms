#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int a[200000];

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k, q;
    cin >> n >> k >> q;
    while(n--){
        int l, r; cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }
    for (int i = 1; i <= 200000; i++){
        a[i] += a[i - 1];
    }
    for (int i = 1; i <= 200000; i++){
        if (a[i] >= k){
            a[i] = 1;
        }
        else a[i] = 0;
        a[i] += a[i - 1];
    }
    while(q--){
        int l, r; cin >> l >> r;
        cout << a[r] - a[l - 1] << endl;
    }
    return 0;
}