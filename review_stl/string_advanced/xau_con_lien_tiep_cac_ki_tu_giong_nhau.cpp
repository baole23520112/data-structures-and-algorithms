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
    string s;
    cin >> s;
    // dam bao rang se luon duoc cap nhat neu chuoi con cuoi cung la chuoi kq
    s += '@';
    int count = 1;
    int res = 1;
    char ans = s[0];
    for (int i = 1; i < s.size(); i++){
        if (s[i] == s[i - 1]){
            count++;
        }
        else {
            if (count > res){
                res = count;
                ans = s[i - 1];
            }
            else if (count == res) {
                ans = max(s[i - 1], ans);
            }
            count = 1;
        }
    }
    string kq = string(res, ans);
    cout << kq;
    return 0;
}