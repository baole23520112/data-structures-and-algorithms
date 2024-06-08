#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

int c[150][150], n, cost, result = INT_MAX;
int visited[150], x[150], min1 = INT_MAX;

void Try(int i){
    for (int j = 1; j <= n; j++){
        if (visited[j] != 1){
            x[i] = j;
            visited[j] = 1;
            cost += c[x[i - 1]][x[i]]; // cộng chi phí đi của thành phố x[i- 1] -> x[i]
            if (i == n){
                result = min(result, cost + c[x[n]][x[1]]); // cập nhật khoảng cách ngắn I
            }
            else if (cost + (n - i + 1) * min1 < result) {
                // đánh giá cận: cho tất cả đường đi sau là trhợp tốt nhất mà k bé hơn -> cắt
                Try(i + 1);
            }
            // Backtracking
            visited[j] = 0;
            cost -= c[x[i - 1]][x[i]];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> c[i][j];
            if (c[i][j]) min1 = min(c[i][j], min1);
        }
    }

    x[1] = 1, visited[1] = 1;
    Try(2);
    cout << result;
    return 0;
}