#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int counteven(int n){
    int count = 0;
    while(n){
        if (n % 10 % 2 == 0)
            count++;
        n /= 10;
    }
    return count;
}

int countodd(int n){
    int count = 0;
    while(n){
        if (n % 10 % 2 != 0)
            count++;
        n /= 10;
    }
    return count;
}

bool cmp(int a, int b){
    if (counteven(a) != counteven(b))
        return counteven(a) < counteven(b);
    return a < b;
}

bool cmp2(int a, int b){
    return countodd(a) < countodd(b);
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    int b[n];
    vector<int> a;
    for (int i = 0; i < n; i++){
        cin >> b[i];
        a.push_back(b[i]);
    }
    sort(a.begin(), a.end(), cmp);
    for (auto x : a){
        cout << x << ' ';
    }
    cout << endl;
    stable_sort(b, b + n, cmp2);
    for (auto x : b){
        cout << x << ' ';
    }
    return 0;
}