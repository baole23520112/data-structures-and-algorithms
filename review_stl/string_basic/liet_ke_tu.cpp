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
        if (s[i] == ',' || s[i] == '!' || s[i] == '?'){
            s[i] = '.';
        }
    }
    string ans = "";
    stringstream ss(s);
    string word;
    while(getline(ss, word, '.')){
        if (word[word.size() - 1] != ' '){
            word += ' ';
        }
        ans += word;
    }
    cout << ans;
    return 0;
}