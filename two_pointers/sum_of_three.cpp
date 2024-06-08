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
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    for (int i = 0; i <= n - 3; i++){
        int l = i + 1, r = n - 1;
        while(l < r){
            int sum = a[i] + a[l] + a[r];
            if (sum < k){
                l++;
            }
            else if (sum > k){
                r--;
            }
            else {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}