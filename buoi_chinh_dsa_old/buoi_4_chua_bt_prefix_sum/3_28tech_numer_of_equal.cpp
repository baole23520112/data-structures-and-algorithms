#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;


int main() {
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    int i = 0, j = 0;
    ll sum = 0;
    while(i < n && j < m){
        if (a[i] < b[j]){
            i++;
        }
        else if (a[i] > b[j]){
            j++;
        }
        else {
            int count1 = 0;
            int count2 = 0;
            while(a[i] == b[j]){
                count1++;
                i++;
            }
            while(a[i - 1] == b[j]){
                count2++;
                j++;
            }
            sum += 1ll * count1 * count2;
        }
    }
    cout << sum;
    return 0;
}
