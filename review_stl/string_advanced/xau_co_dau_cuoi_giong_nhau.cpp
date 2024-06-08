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
    int a[257] = {0};
    string s;
    cin >> s;
    // dem so lan xuat hien cua moi ki tu 
    for (int i = 0; i < s.size(); i++){
        a[s[i]]++;
    }
    // cac xau con co 1 ki tu
    ll sum = s.size(); 
    for (int i = 0; i < 257; i++){
        // tinh to hop chap 2 cua n~ ki tu xuat hien tu 2 tro len
        if (a[i] >= 2){
            sum += (1ll * a[i] * (a[i] - 1) / 2);
        }
    }
    cout << sum;
    return 0;
}