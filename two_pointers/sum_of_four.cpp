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
    for (int i = 0; i <= n - 4; i++){
        for (int j = i + 1; j <= n - 3; j++){
            int l = j + 1, r = n - 1;
            while(l < r){
                int sum = a[i] + a[j] + a[l] + a[r];
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
    }
    cout << "NO";
    return 0;
}