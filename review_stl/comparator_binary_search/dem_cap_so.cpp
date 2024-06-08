#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int firstPos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int m = (r + l) / 2;
        if (a[m] == x){
            res = m;
            r = m - 1;
        }
        else if (a[m] > x){
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    return res;
}

int lastPos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int m = (r + l) / 2;
        if (a[m] == x){
            res = m;
            l = m + 1;
        }
        else if (a[m] > x){
            r = m - 1;
        }
        else {
            l = m + 1;
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
    int n, k; cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll count = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++){
        int first = firstPos(a, i + 1, n - 1, a[i] + k);
        int last = lastPos(a, i + 1, n - 1, a[i] + k);
        if (first != -1){
            count += (last - first + 1);
        }
    }
    cout << count << endl;
    return 0;
}