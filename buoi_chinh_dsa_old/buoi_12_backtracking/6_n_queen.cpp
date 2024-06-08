#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

int n, cot[130], cheo1[130], cheo2[130];
int cnt = 0;

void Try(int i){
    for (int j = 1; j <= n; j++){
        if (cot[j] && cheo1[i - j + n] && cheo2[i + j - 1]){
            cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 0;
            if (i == n){
                cnt++;
            }
            else {
                Try(i + 1);
            }
            cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 1;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i <= 100; i++){
        cot[i] = cheo1[i] = cheo2[i] = 1;
    }
    Try(1);
    cout << cnt;
    return 0;
}