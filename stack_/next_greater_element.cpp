#include <bits/stdc++.h>
using namespace std;

using ll = long long;



int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    int a[n], b[n];
    stack<int> st;
    for (int &x : a) cin >> x;
    for (int i = 0; i < n; i++){
        if (st.empty()){ // rộng thì thêm
            st.push(i);
        }
        else {
            while(!st.empty() && a[st.top()] < a[i]){ // không rộng và đã tìm được ptử lớn hơn
                b[st.top()] = a[i]; // thì gán kết quả cho mảng b tại st.top()
                st.pop(); // xóa cái vừa gán kq
            }
            st.push(i); // lưu lại cái ptử lớn hơn để tiếp tục xét
        }
    }
    while(!st.empty()){ // nếu thoát ra khỏi vòng lặp mà vẫn còn chưa tìm được ptử lớn hơn
        b[st.top()] = -1; // thì gán tất cả = -1
        st.pop();
    }
    for (int x : b) cout << x << ' ';
    return 0;
}