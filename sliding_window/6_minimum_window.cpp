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
    string s, t; cin >> s >> t;
    int a[257] = {0};
    int countc = 0;
    for (char x : t){
        a[x]++;
        if (a[x] == 1) countc++;
    }
    int l = 0;
    map<int, int> mp;
    int count = 0;
    int res = INT_MAX;
    int pos = 0;
    for (int r = 0; r < s.size(); r++){
        mp[s[r]]++;
        if (a[s[r]] && mp[s[r]] == a[s[r]]) count++;
        while(count == countc && (mp[s[l]] - 1 >= a[s[l]])){
            mp[s[l]]--;
            if (mp[s[l]] == 0) mp.erase(s[l]);
            l++;
            if (r - l + 1 < res){
                pos = l;
                res = r - l + 1;
            }
        }
        if (count == countc && r - l + 1 < res){
            pos = l;
            res = r - l + 1;
        }
    }
    if (res != INT_MAX)
        for (int i = pos; i < pos + res; i++){
            cout << s[i];
        }
    else cout << -1;
    return 0;
}