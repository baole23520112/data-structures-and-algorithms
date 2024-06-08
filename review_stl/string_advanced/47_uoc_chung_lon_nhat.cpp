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
    ll a, x, y;
    cin >> a >> x >> y;
    while(y){
        ll temp = x % y;
        x = y;
        y = temp;
    }
    for (int i = 0; i < x; i++){
        cout << a;
    }
    return 0;
}