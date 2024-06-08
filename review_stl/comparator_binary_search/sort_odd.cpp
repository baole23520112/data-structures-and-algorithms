#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int countodd(int n){
    int count = 0;
    while(n){
        if (n % 10 % 2 != 0)
            count++;
        n /= 10;
    }
    return count;
}

bool cmp(int a, int b){
    if (countodd(a) != countodd(b))
        return countodd(a) > countodd(b);
    return a < b;
}

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
    sort(a, a + n, cmp);
    for (auto x : a){
        cout << x << ' ';
    }
    return 0;
}