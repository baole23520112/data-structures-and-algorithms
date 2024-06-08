#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int lower_bound1(int a[], int n, int x){
    int res = -1;
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (r + l) / 2;
        if (a[m] >= x){
            res = m;
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    return res;
}
int upper_bound1(int a[], int n, int x){
    int res = -1;
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (r + l) / 2;
        if (a[m] > x){
            res = m;
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    return res;
}
int firstPos(int a[], int n, int x){
    int res = -1;
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if (a[m] == x){
            res = m;
            r = m - 1;
        }
        else if (a[m] < x){
            l = m + 1;
        }
        else 
            r = m - 1;
    }
    return res;
}
int lastPos(int a[], int n, int x){
    int res = -1;
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if (a[m] == x){
            res = m;
            l = m + 1;
        }
        else if (a[m] < x){
            l = m + 1;
        }
        else 
            r = m - 1;
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
    int n, x; cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int dau = firstPos(a, n, x), cuoi = lastPos(a, n, x);
    cout << lower_bound1(a, n, x) << endl;
    cout << upper_bound1(a, n, x) << endl;
    cout << dau << endl;
    cout << cuoi << endl;
    if (cuoi == -1) cout << 0;
    else cout << cuoi - dau + 1;
    return 0;
}