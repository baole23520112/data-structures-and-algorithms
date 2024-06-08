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
    s += '@';
    ll temp;
    ll sum = 0;
    for (char x : s){
        if (isdigit(x)){
            temp = temp * 10 + (x - '0');
        }
        else {
            sum += temp;
            temp = 0;
        }
    }
    cout << sum << endl;
    return 0;
}