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
    string s; cin >> s;
    int k; cin >> k;
    for (int i = 0; i < k; i++){
        cout << s[i];
    }
    cout << "28tech";
    for (int i = k; i < s.size(); i++){
        cout << s[i];
    }
    return 0;
}