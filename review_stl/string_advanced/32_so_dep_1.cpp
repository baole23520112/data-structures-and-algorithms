#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool csnt(string s){
    for (char x : s){
        if (x != '2' && x != '3' && x != '5' && x != '7')
            return false;
    }
    return true;
}

bool tongnt(string s){
    ll sum = 0;
    for (char x : s) sum += (x - '0');
    for (int i = 2; i <= sqrt(sum); i++){
        if (sum % i == 0)
            return false;
    }
    return sum > 1;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s; cin >> s;
    if (csnt(s) && tongnt(s)) cout << "YES";
    else cout << "NO";
    return 0;
}