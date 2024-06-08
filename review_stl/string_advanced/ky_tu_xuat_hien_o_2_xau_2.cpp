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
    set<char> s1, s2, ans1, ans2;
    string a, b;
    cin >> a;
    for (int i = 0; i < a.size(); i++){
        s1.insert(a[i]);
    }
    cin >> b;
    for (int i = 0; i < b.size(); i++){
        s2.insert(b[i]);
    }
    for (auto x : s1){
        if (s2.find(x) == s2.end()){
            ans1.insert(x);
        }
    }
    for (auto x : s2){
        if (s1.find(x) == s1.end()){
            ans2.insert(x);
        }
    }
    for (auto x : ans1){
        cout << x;
    }
    cout << endl;
    for (auto x : ans2){
        cout << x;
    }
    return 0;
}