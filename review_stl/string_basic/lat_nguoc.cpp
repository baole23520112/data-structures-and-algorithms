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
    for (int i = s.size() - 1; i >= 0; i--){
        cout << s[i];
    }
    cout << endl;
    string temp = s;
    for (int i = 0; i < temp.size(); i++){
        if ('A' <= temp[i] && temp[i] <= 'Z'){
            temp[i] += 32;
        }
    }
    cout << temp << endl;
    for (int i = 0; i < s.size(); i++){
        if ('a' <= s[i] && s[i] <= 'z'){
            s[i] -= 32;
        }
    }
    cout << s << endl;
    return 0;
}