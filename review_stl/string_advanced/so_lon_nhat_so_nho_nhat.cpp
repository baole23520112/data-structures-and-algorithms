// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// void max(int m, int s){
//     string max = "";
//     while(m--){
//         // when s still => s = 9 + x;
//         if (s >= 9){
//             max += '9';
//             s -= 9;
//         }
//         // when s < 9
//         else {
//             // ex: 2 
//             max += to_string(s);
//             // add some number 0 behind max
//             s = 0;
//         }
//     }
//     cout << max;
// }

// void min(int m, int s){
//     string min = "";
//     s--;
//     m--;
//     while(m--){
//         if (s >= 9){
//             min += '9';
//             s -= 9;
//         }
//         else {
//             min = to_string(s) + min;
//             s = 0;
//         }
//     }
//     s++;
//     min = to_string(s) + min;
//     cout << min;
// }

// int main(){
//     // #ifndef ONLINE_JUDGE
//     // freopen("input.txt", "r", stdin);
//     // freopen("output.txt", "w", stdout);
//     // #endif
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int m, s; cin >> m >> s;
//     if (m * 9 < s || (s == 0 && m > 1)){
//         cout << "NOT FOUND";
//         return 0;
//     }
//     min(m, s);
//     cout << endl;
//     max(m, s);
//     return 0;
// }


// su dung mang
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
    int m, s; cin >> m >> s;
    if (9 * m < s || (s == 0 && m > 1)){
        cout << "NOT FOUND";
    }
    else {
        // max
        int be[m], lon[m];
        int temp = s;
        for (int i = 0; i < m; i++){
            if (s >= 9){
                lon[i] = 9;
                s -= 9;
            }
            else {
                lon[i] = s;
                s = 0;
            }
        }

        // min
        temp--; // lưu trữ lại 1 đơn vị cho hàng đầu
        for (int i = m - 1; i >= 0; i--){
            if (temp >= 9){
                be[i] = 9;
                temp -= 9;
            }
            else {
                be[i] = temp;
                temp = 0;
            }
        }
        be[0] += 1; // nếu là 0 thì gắn số 1 cho có nghĩa, còn số khác cũng tăng 1
        for (int i = 0; i < m; i++){
            cout << be[i];
        }
        cout << endl;
        for (int i = 0; i < m; i++){
            cout << lon[i];
        }
    }
    return 0;
}