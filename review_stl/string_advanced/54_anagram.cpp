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
    int t; cin >> t;
    while(t--){
        int a[257] = {0}, b[257] = {0};
        string s; cin >> s;
        for (char x : s){
            a[x]++;
        }
        cin >> s;
        for (char x : s){
            b[x]++;
        }
        bool check = true;
        for (int i = 97; i <= 122; i++){
            if (a[i] != b[i]){
                cout << "NO" << endl;
                check = false;
                break;
            }
        }
        if (check) cout << "YES" << endl;
    }
    return 0;
}