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
    int a[257] = {0};
    for (int i = 0; i < s.size(); i++){
        if (isupper(s[i]))
            s[i] += 32;
        a[s[i]]++;
    }
    bool check = true;
    for (int i = 97; i <= 122; i++){
        if (a[i] == 0){
            check = false;
        }
    }
    if (check)
        cout << "YES";
    else cout << "NO";
    return 0;
}