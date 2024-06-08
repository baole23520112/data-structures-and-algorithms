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
    int a[257] = {0};
    for (int i = 0; i < s.size(); i++){
        a[s[i]]++;
    }
    int max = 0, max_val = a[0];
    for (int i = 0; i < 257; i++){
        if (max_val <= a[i]){
            max = i;
            max_val = a[i];
        }
    }
    int min_val = s.size(), min = 0;
    for (int i = 0; i < 257; i++){
        if (min_val >= a[i] && a[i] > 0){
            min = i;
            min_val = a[i];
        }
    }
    cout << (char)max << ' ' << max_val << endl;
    cout << (char)min << ' ' << min_val << endl;
    return 0;
}