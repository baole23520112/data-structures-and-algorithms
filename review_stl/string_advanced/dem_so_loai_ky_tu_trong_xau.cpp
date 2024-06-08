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
    int countchar = 0, countnum = 0, countspe = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++){
        if (isalpha(s[i])) countchar++;
        else if (isdigit(s[i])) countnum++;
        else countspe++;
    }
    cout << countchar << ' ' << countnum << ' ' << countspe << endl;
    return 0;
}