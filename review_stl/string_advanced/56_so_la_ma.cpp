#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int lama(char a){
    if (a == 'I')
        return 1;
    else if (a == 'V')
        return 5;
    else if (a == 'X')
        return 10;
    else if (a == 'L')
        return 50;
    else if (a == 'C')
        return 100;
    else if (a == 'D')
        return 500;
    else 
        return 1000;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        ll sum = lama(s[s.size() - 1]);
        for (int i = s.size() - 2; i >= 0; i--){
            if (lama(s[i]) >= lama(s[i + 1]))
                sum += lama(s[i]);
            else 
                sum -= lama(s[i]);
        }
        cout << sum << endl;    
    }
    return 0;
}