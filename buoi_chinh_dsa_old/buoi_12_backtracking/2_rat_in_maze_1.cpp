#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

int a[100][100], n, check = 0;
string s;

void nhap(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j){
    if (i == n && j == n){
        check = 1;
        cout << s << endl;
    }
    // ưu tiên đi xuống dưới vì D < R
    if (i + 1 <= n && a[i + 1][j] == 1){
        a[i + 1][j] = 0;
        s += 'D'; // lưu kết quả
        Try(i + 1, j);
        a[i + 1][j] = 1; // backtrack
        s.pop_back(); // backtrack answer
    }
    if (j + 1 <= n && a[i][j + 1] == 1){
        a[i][j + 1] = 0;
        s += 'R';
        Try(i, j + 1);
        a[i][j + 1] = 1;
        s.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    nhap();
    Try(1, 1);
    if (check == 0) cout << -1;
    return 0;
}