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
    for (int i = 0; i < s.size() - 1; i++){
        if (abs(s[i] - s[i + 1]) != 1){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}