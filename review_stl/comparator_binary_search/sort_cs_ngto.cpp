#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int sum(int n){
    int count = 0;
    while(n){
        int x = n % 10;
        if (x == 2 || x == 3 || x == 5 || x == 7)
            count++;
        n /= 10;
    }
    return count;
}

bool cmp(int a, int b){
        return sum(a) > sum(b);
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
    stable_sort(a, a + n, cmp);
    for (auto x : a){
        cout << x << ' ';
    }
    return 0;
}