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
    string check = "python";
    int count = 0;
    for (int i = 0; i < s.size(); i++){
        if (count >= 6) break;
        if (s[i] == check[count]){
            count++;
        }
    }
    if (count == 6) cout << "YES";
    else cout << "NO";
    return 0;
}