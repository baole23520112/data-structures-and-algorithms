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
    s += s[s.size() - 1];
    int count = 1;
    int res = 1;
    int ans = 0;
    for (int i = 1; i < s.size(); i++){
        if (s[i] != s[i - 1]){
            count++;
        }
        else {
            if (count > res){
                res = count;
                ans = i - count;
            }
            else if (count == res){
                if (s[i - count] >= s[ans]){
                    ans = i - count;
                }
            }
            count = 1;
        }
    }
    string kq = s.substr(ans, res);
    cout << kq;
    return 0;
}