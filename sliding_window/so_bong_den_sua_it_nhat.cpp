#include <bits/stdc++.h>
using namespace std;

using ll = long long;



int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, b, k; cin >> n >> k >> b;
    int a[n] = {0};
    for (int i = 0; i < b; i++){
        int v;
        cin >> v;
        v--;
        a[v] = 1;
    }
    int count1 = 0;
    for (int i = 0; i < k; i++){
        if (a[i] == 0){
            count1++;
        }
    }
    int res = count1;
    for (int i = k; i < n; i++){
        if (a[i] == 0) count1++;
        if (a[i - k] == 0) count1--;
        res = max(res, count1);
    }
    cout << k - res;
    return 0;
}