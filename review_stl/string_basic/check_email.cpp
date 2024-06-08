#include <bits/stdc++.h>
using namespace std;

using ll = long long;
string a[4] = {"@gmail.com", "@28tech.com.vn", "@yahoo.com", "@hotmail.com"};

bool check(string s){
    int count = 0;
    int countcham = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '@') count++;
        if (s[i] == '.') countcham++;
        if (!isdigit(s[i]) && !isalpha(s[i]) && s[i] != '@' && s[i] != '.' && s[i] != '_')
            return false;
    }
    if (count != 1) return false;
    if (countcham != 1 && countcham != 2) return false;
    bool ktr = false;
    for (int i = 0; i < 4; i++){
        auto found = s.find(a[i]);
        if (found != string::npos) ktr = true;
    }
    return ktr;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    string s;
    cin.ignore(1);
    for (int i = 0; i < n; i++){
        getline(cin, s);
        if (check(s))
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
//lehanh%@gmail.com
//01234567890123456