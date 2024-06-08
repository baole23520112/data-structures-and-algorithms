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
    int count = 1;
    for (int i = s.size() - 1; i >= 0; i--){
        if (count == 3){
            count = 1;
            s.insert(i, ",");
        }
        else {
            count++;
        }
    }
    cout << s << endl;
    return 0;
}