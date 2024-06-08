// #include <bits/stdc++.h>
// using namespace std;
// #pragma GCC optimize ("03,unroll-loops")
// #pragma GCC target ("avx2,bmi,bmi2")
// using ll = long long;

// // TH1: mang le
// // - Them: 
// //     + Them 1 so >= median => median khong doi
// //     + Them 1 so < median => it--
// // - Xoa:
// //     + Xoa 1 so < median: median khong doi
// //     + Xoa 1 so > median: it--;
// //     + Xoa 1 so = median:
// //         + it2 != it: median khong doi (vi tri)
// //         + it2 == it: it--; (vi tri)
// //         it2 chinh la lower_bound(gia tri cu nhat)
// // TH2: mang chan
// // - Them:
// //     + Them 1 so < median => khong doi
// //     + Them 1 so >= median => it++;
// // - Xoa:
// //     + Xoa 1 so <= median => it++;
// //     + Xoa 1 so > median => khong doi

// int main(){
//     // #ifndef ONLINE_JUDGE
//     // freopen("input.txt", "r", stdin);
//     // freopen("output.txt", "w", stdout);
//     // #endif
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int n, k; cin >> n >> k;
//     int a[n];
//     for (int &x : a) cin >> x;
//     multiset<int> se;
//     for (int i = 0; i < k; i++){
//         se.insert(a[i]);
//     }
//     auto it = se.begin();
//     advance(it, (k - 1) / 2);
//     cout << *it << ' ';
//     if (k & 1){
//         for (int i = k; i < n; i++){
//             se.insert(a[i]);
//             if (a[i] < *it) it--;
//             auto it2 = se.lower_bound(a[i - k]);
//             if (*it2 <= *it) it++;
//             se.erase(it2);
//             cout << *it << ' ';
//         }
//     }
//     else {
//         for (int i = k; i < n; i++){
//             se.insert(a[i]);
//             if (a[i] >= *it) it++;
//             auto it2 = se.lower_bound(a[i - k]);
//             if (*it2 > *it || it2 == it) it--;
//             se.erase(*it2);
//             cout << *it << ' ';
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// using namespace std;
// template <typename T>
// using ordered_set = tree<T, null_type,less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;

// int main()
// {
//     int n , k ; cin >> n >> k;
//     int a[n]; for(int i = 0 ; i < n ; i++) cin >> a[i];
//     ordered_set<int>se;
//     for(int i = 0 ; i < k ; i++)
//     {
//         se.insert(a[i]);
//     }
//     // find_by_order(k): Tra ve con tro thu k
//     // order_of_key(x) : Tra ve so luong phan tu < x
//     cout << *se.find_by_order((k - 1) / 2) << " ";
//     for(int i = k; i < n ; i++)
//     {
//         se.erase(se.find_by_order(se.order_of_key(a[i - k])));
//         se.insert(a[i]);
//         cout << *se.find_by_order((k - 1)/ 2) << " ";
//     }
//     return  0;
// }

#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ordered_set<int> se;
    se.insert(2);
    se.insert(3);
    se.insert(1);
    cout << *se.find_by_order(2);
    return 0;
}
