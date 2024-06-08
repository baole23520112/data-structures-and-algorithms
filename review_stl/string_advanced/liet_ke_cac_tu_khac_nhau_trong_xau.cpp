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
    set<string> a;
    vector<string> b;
    string s;
    while(cin >> s){
        b.push_back(s);
        a.insert(s);
    }
    for (auto x : a){
        cout << x << ' ';
    }
    cout << endl;
    for (auto x : b){
        auto it = a.find(x);
        if (it != a.end()){
            cout << x << ' ';
            a.erase(*it);
        }
    }
    return 0;
}