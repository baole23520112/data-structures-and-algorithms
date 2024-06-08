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
    int a[s.size() + 1] = {0};
    for (int i = 1; i <= s.size(); i++){
        a[i] = a[i - 1] + (s[i - 1] == '1' ? 1 : - 1);
    }
    int ans = 0;
    map<int, int> mp;
    for (int i = 0; i <= s.size(); i++){
        cout << a[i] << ' ';
        if (mp.find(a[i]) == mp.end()){ 
            mp[a[i]] = i; // luu lai vi tri xuat hien lan dau
        }
        else { // xuat hien substring thoa man
            ans = max(ans, i - mp[a[i]]);
        }
    }
    cout << ans;
    return 0;
}