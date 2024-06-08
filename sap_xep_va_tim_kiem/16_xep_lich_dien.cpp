// khi sắp xếp theo first -> (1, 23) tức là bắt đầu sớm nhưng vẫn có thể kết 
// thúc muộn -> có thể chiếm nhiều thời gian của 1 ngày hơn
// ex: (1, 5) -> (2, 4) thì (2, 4) có khi còn tốt hơn nhiều so với (1, 5)
// khi sắp xếp theo second -> (2, 3) tức là bắt đầu như thế nào cũng được 
// nhưng kết thúc sớm thì có thể thực hiện các công việc khác được.
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
    pair<int, int> a[n];
    for (auto &x : a) cin >> x.first >> x.second;
    sort(a, a + n, [](pair<int, int> a, pair<int, int> b)->bool{
        return a.second < b.second;
    });
    int cnt = 1, timeEnd = a[0].second;
    for (auto x : a){
        if (timeEnd < x.first){
            cnt++;
            timeEnd = x.second;
        }
    }
    cout << cnt;
    return 0;
}