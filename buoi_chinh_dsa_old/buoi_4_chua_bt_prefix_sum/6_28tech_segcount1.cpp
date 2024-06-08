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
    int left = 0, sum = 0, temp = 0;
    for (int right = 0; right < n; right++){
        temp += a[right];
        while(temp > s){
            temp -= a[left];
            left++;
        }
        sum += right - left + 1; // cập nhật dãy con tính từ left đến right
    }
    cout << sum << endl;
    return 0;
}