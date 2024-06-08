#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool search(int a[], int n, int k){
    int l = 0, r = n - 1;
    while(l < r){
        int x = a[r] + a[l];
        if (x == k) return true;
        else if (x < k){
            l++;
        }
        else {
            r--;
        }
    }
    return false;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k; cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    if (search(a, n, k)) cout << "YES";
    else cout << "NO";
    return 0;
}
// 3 5 5 8 8 8 9