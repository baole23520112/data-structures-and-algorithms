#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int x;
bool cmp1(int a, int b){
    if (abs(a - x) != abs(b - x))
        return abs(a - x) < abs(b - x);
    return a < b;
}

bool cmp2(int a, int b){
    if (a % 2 == 0 && b % 2 == 0){
        return a < b;
    }
    else if (a % 2 != 0 && b % 2 != 0){
        return a > b;
    }
    else 
        return a % 2 == 0;
        // nếu a là số thứ nhất, b là số thứ 2
        // nếu a là số chẵn thì auto trả về đúng
        // tức không thay đổi còn nếu có thì ngược lại
}
// (a % 2 == 0) && (b % 2 != 0) && 
int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n >> x;
    int a[n];
    vector<int> b;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        b.push_back(a[i]);
    }
    sort(a, a + n, cmp1);
    for (auto x : a){
        cout << x << ' ';
    }
    cout << endl;
    sort(b.begin(), b.end(), cmp2);
    for (auto x : b){
        cout << x << ' ';
    }
    return 0;
}