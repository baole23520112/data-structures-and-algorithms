#include <bits/stdc++.h>
// #pragma GCC optimize ("03,unroll-loops")
// #pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        if (a[i] == 25){
            mp[25]++;
        }
        else if (a[i] == 50){
            if (mp[25] < 1) {
                cout << "NO";
                return 0;
            }
            else {
                mp[25]--;
                mp[50]++;
            }
        }
        else {
            if (mp[25] > 0 && mp[50] > 0){
                mp[25]--;
                mp[50]--;
            }
            else if (mp[25] > 2){
                mp[25] -= 3;
            }
            else {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}