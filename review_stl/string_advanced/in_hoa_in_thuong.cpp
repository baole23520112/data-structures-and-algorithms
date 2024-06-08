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
    getline(cin, s);
    for (int i = 0; i < s.size(); i++){
        if ('a' <= s[i] && s[i] <= 'z'){
            s[i] -= 32;
        }
    }
    cout << s << endl;
    for (int i = 0; i < s.size(); i++){
        if ('A' <= s[i] && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
    cout << s << endl;
    return 0;
}