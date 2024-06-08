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
    int n; cin >> n;
    map<int, int> a;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a[x]++;
        cout << a[x] << ' ';
    }
    return 0;
}