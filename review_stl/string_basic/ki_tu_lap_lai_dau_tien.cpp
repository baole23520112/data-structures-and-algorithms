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
    map<char, int> check;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        check[s[i]]++;
        if (check[s[i]] >= 2){
            cout << s[i];
            return 0;
        }
    }
    cout << "NONE";
    return 0;
}