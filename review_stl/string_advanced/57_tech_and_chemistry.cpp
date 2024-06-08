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
    map<string, int> nt;
    for (int i = 0; i < 10; i++){
        string s; cin >> s;
        int n; cin >> n;
        nt[s] = n;
    }
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        ll sum = 0;
        for (int i = 0; i < s.size(); i++){
            string hh = "";
            int count = 0;
            if (isalpha(s[i])){
                while(isalpha(s[i]) && i < s.size()){
                    hh += s[i];
                    i++;
                }
                while(isdigit(s[i]) && i < s.size()){
                    count = count * 10 + (s[i] - '0');
                    i--;
                }
            }
            sum += (nt[hh] * count);
        }
        cout << sum << endl;
    }
    return 0;
}