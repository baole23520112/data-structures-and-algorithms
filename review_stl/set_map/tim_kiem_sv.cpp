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
    map<string, string> a;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        string ma, ten;
        cin >> ma;
        cin.ignore(1);
        getline(cin, ten);
        a.insert({ma, ten});
    }
    int t; cin >> t;
    while(t--){
        string x;
        cin >> x;
        auto pos = a.find(x);
        if (pos != a.end()){
            cout << pos->second << endl;
        }
        else cout << "NOT FOUND" << endl;
    }
    return 0;
}