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
    int lg = s.size();
    if (lg % 2 == 0){
        cout << "NOT FOUND";
    }
    else {
        cout << s[lg / 2] << endl;
    }
    return 0;
}