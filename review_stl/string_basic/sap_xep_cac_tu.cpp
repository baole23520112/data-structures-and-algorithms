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
    multiset<string> a;
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    while(ss >> word){
        a.insert(word);
    }
    for (auto x : a){
        cout << x << ' ';
    }
    cout << endl;
    for (auto it = a.rbegin(); it != a.rend(); it++){
        cout << *it << ' ';
    }
    return 0;
}