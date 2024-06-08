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
    string s; cin >> s;
    int temp = 0;
    for (int i = 0; i < s.size(); i++){
        temp += (s[i] - '0');
    }
    while(temp >= 10){
        int store = temp;
        temp = 0;
        while(store){
            temp += (store % 10);
            store /= 10;
        }
    }
    if (temp == 9) cout << "YES";
    else cout << "NO";
    return 0;
}