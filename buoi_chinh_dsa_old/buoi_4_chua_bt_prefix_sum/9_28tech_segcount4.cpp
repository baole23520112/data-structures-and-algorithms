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
    int l = 0;
    multiset<int> se;
    int sum = 0;
    for (int r = 0; r < n; r++){
        se.insert(a[r]);
        while(se.size() >= 1 && *se.rbegin() - *se.begin() > k){
            se.erase(se.find(a[l]));
            l++;
        }
        sum += r - l + 1;
    }
    cout << sum;
    return 0;
}