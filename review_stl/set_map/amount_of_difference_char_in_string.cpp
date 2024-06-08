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
    string s;
    while(cin >> s){
        a.insert(s);
    }
    cout << a.size() << endl;
    cout << *(a.begin()) << ' ' << *(a.rbegin()) << endl;
    return 0;
}