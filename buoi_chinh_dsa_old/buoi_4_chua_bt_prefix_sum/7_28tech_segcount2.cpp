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
    int n, s; cin >> n >> s;
    int a[n];
    for (int &x : a) cin >> x;
    int left = 0, temp = 0, sum = 0;
    for (int right = 0; right < n; right++){
        temp += a[right];
        while(temp >= s){ //
            sum += n - right; // cập nhật dãy con ở phía sau tính từ right
            temp -= a[left];
            left++;
        }
    }
    cout << sum << endl;
    return 0;
}