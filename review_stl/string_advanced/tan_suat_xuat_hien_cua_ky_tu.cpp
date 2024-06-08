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
    int a[257] = {0};
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        a[s[i]]++;
    }
    for (int i = 0; i < 257; i++){
        if (a[i] != 0){
            cout << (char)i << ' ' << a[i] << endl;
        }
    }
    cout << endl;
    for (int i = 0; i < s.size(); i++){
        if (a[s[i]] != -1){
        cout << s[i] << ' ' << a[s[i]] << endl;
        a[s[i]] = -1;
        }
    }
    return 0;
}