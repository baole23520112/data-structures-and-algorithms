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
    char a[20];
    cin.getline(a, 20);
    sort(a, a + strlen(a));
    for (int i = 0; a[i] != '\0'; i++){
        if (a[i] != '0')
            cout << a[i];
    }
    if (a[0] == '0' && strlen(a) == 1) cout << 0;
    return 0;
}