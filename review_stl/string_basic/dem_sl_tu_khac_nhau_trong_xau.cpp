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
    set<string> a;
    while(cin >> s){
        for (int i = 0; i < s.size(); i++){
            if (isupper(s[i])){
                s[i] += 32;
            }
        }
        a.insert(s);
    }
    cout << a.size();
    return 0;
}