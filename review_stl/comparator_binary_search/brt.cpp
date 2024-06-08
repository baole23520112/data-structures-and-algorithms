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
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int min = 2e9;
    for (int i = 0; i < n - 1; i++){
        int x = a[i + 1] - a[i];
        if (x < min)
            min = x;
    }
    int count = 0;
    for (int i = 0; i < n; i++){
        int x = a[i + 1] - a[i];
        if (x == min)
            count++;
    }
    cout << min << ' ' << count << endl;
    return 0;
}