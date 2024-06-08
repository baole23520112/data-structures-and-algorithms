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
    int l = 0;
    multiset<char> se;
    int ans = 0;
    for (int r = 0; r < s.size(); r++){
        se.insert(s[r]);
        while(se.count(s[r]) > 1){
            se.erase(se.find(s[l]));
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans;
    return 0;
}