#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// -min -> min(1, 2), min({1, 2, 3})
// -max -> max(1, 2), max({1, 2, 3})
// -min_element -> *min_element(a, a + n), *min_element(a.begin(). a.end())
// -max_element -> *max_element(a, a + n), *max_element(a.begin(). a.end())
// -accumulate -> accumulate(a, a + n), accumulate(a + x, a + y + 1), accumulate(a.begin(), a.end())

// -swap -> swap(a, b)

// -sort -> sort(a, a + n), sort(a.begin(), a.end()), sort(a, a + n, greater<int>())
// -stable_sort -> stable_sort(a, a + n), ...

// -find -> trả về con trỏ trỏ đến phần tử tìm thấy hoặc trả về con trỏ trỏ vào ptử cuối cùng
// -binary_search->trả về pointer, sử dụng cho mảng hoặc vector đã sắp xếp -> binary_search(a, a + n, x)
// -lower_bound-> trả về pointer, a + n hoặc end() nếu k tìm thấy -> tìm >= x trong khoảng [first; last)
// -upper_bound-> trả giá trị > x đầu tiên

// -memset -> dùng để gán tất cả phần tử của <mảng> = 0 or -1
// -fill -> gán giá trị của mảng bằng bao nhiêu đó, cho cả mảng và vector

// -merge -> trộn 2 mảng, 2 vector đã được sắp xếp
// -reverse -> reverse(a, a + n), reverse(s.begin(), s.end())

// đểu phải sort trước khi sử dụng
// -set_union -> hợp
// -set_intersection -> giao
// -set_difference -> thuộc mảng t1 nhma không thuộc t2
// -set_symetric_difference -> thuộc phần bù của phần giao

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int a[5] = {1, 2, 3, 4, 5};
    // vector<int> v = {1, 2, 3, 4 ,5};
    // cout << *max_element(v.begin(), v.end()) << endl;
    // auto it = find(a, a + 5, 3);
    // if (it != a + 5){
    //     cout << "FOUND";
    // }
    // else cout << "NOT FOUND";


    // int a[5] = {1, 2, 3, 4, 5};
    // memset(a, 0, sizeof(a));
    // for (int x : a) cout << x << ' ';
    // fill(a, a + 5, 1000);
    // for (int x : a) cout << x << ' ';


    // vector<int> a = {1, 2, 3, 3, 4};
    // vector<int> b = {1, 1, 2, 5, 10, 15};
    // vector<int> res(11);
    // merge(a.begin(), a.end(), b.begin(), b.end(), res.begin());
    // for (int x : res) cout << x << ' ';

    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 4, 3, 5, 6, 7};
    vector<int> u(11);
    set_union(a, a + 5, b, b + 6, u.begin()); // có thể trả về iterator
    return 0;
}