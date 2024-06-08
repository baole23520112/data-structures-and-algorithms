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
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    int i = 0, j = 0;
    while(i < n && j < m){
        if (a[i] < b[j]){
            i++;
        }
        else {
            b[j] = i;
            j++;
        }
    }
    while(j < m){
        b[j] = i;
        j++;
    }
    for (int x : b) cout << x << ' ';
    return 0;
}