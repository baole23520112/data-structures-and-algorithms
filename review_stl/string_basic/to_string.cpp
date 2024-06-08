#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string my_to_string(ll n){
    string ans = "";
    ll k = n;
    n = abs(n);
    while(n){
        int x = n % 10;
        n /= 10;
        ans = to_string(x) + ans;
    }
    if (k < 0) ans = "-" + ans;
    return ans;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; cin >> n;
    if (n != 0)
        cout << my_to_string(n) << endl;
    else cout << 0;
    return 0;
}