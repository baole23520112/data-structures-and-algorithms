#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(string s){
    for (int i = 0; i < s.size(); i++){
        if (s[i] != s[s.size() - 1 - i])
            return false;
    }
    return true;
}

bool cmp(string a, string b){
    return a.size() < b.size();
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<string> a;
    string s;
    while(cin >> s){
        if (check(s)){
            bool check = true;
        for (auto x : a){
            if (x == s)
                check = false;
        }
        if (check) a.push_back(s);
        }
    }
    stable_sort(a.begin(), a.end(), cmp);
    for (auto x : a){
        cout << x << ' ';
    }
    return 0;
}