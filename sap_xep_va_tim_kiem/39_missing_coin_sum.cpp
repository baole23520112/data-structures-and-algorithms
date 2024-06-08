#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
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
    ll max1 = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++){
        if (a[i] > max1 + 1){ // nếu xu tiếp theo lớn hơn xu chưa có -> loại (auto max + x > chưa)
            cout << max1 + 1;
            return 0;
        }
        max1 += a[i];
    }
    cout << max1 + 1;
    return 0;
}

#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll ans=1;
    for(int i=0;i<n;i++){
        if(a[i]<=ans){
            ans+=a[i];
        }
        else break;
    }
    cout<<ans;
}