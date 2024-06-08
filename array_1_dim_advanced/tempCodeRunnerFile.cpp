#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int n; cin >> n;
    int count = 0;
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++){
        int temp = n / a[i];
        if (temp){
            count += temp;
            n %= a[i];
        }
    }
    cout << count;
    return 0;
}