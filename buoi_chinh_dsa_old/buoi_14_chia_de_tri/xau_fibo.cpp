#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

// tìm vị trí thứ k trong xâu thứ n
// bài toán con nhỏ nhất -> F(1) và F(2)
// so sánh với size của xâu thứ n - 2
// + k <= F(n - 2) -> nằm trong F(n - 2) vị trí k
// + k > F(n - 2) -> nằm trong F(n - 1) vị trí k - F(n - 2).size()

ll F[100];

void sieve(){
    F[1] = F[2] = 1;
    for (int i = 3; i <= 92; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
}

char fibo(int n, ll k){
    if (n == 1) return 'A';
    if (n == 2) return 'B';
    if (k <= F[n - 2])
        return fibo(n - 2, k);
    else 
        return fibo(n - 1, k - F[n - 2]);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    ll n, k; cin >> n >> k;
    cout << fibo(n, k);
    return 0;
}