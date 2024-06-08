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
    string s; cin >> s;

    // way 1
    // for (char &x : s){
    //     if (!isdigit(x))
    //         x = ' ';
    // }
    // vector<string> nums;
    // stringstream ss(s);
    // string word;
    // while(ss >> word){
    //     nums.push_back(word);
    // }


    // way 2
    s += '@';
    string temp = "";
    vector<string> nums;
    for (char x : s){
        if (isdigit(x)){
            temp += x;
        }
        else {
            // chuan hoa xau - xoa so 0
            while(temp.size() > 1 && temp[0] == '0')
            // while(temp[0] == '0' && temp.size() > 1) // segmentation fault
                temp.erase(0, 1);
            if (temp != "") // "abc" thi no se lay xau rong 
            nums.push_back(temp);
            temp = "";
        }
    }
    sort(nums.begin(), nums.end(), [](string a, string b)->bool{
        if (a.size() != b.size())
            return a.size() < b.size();
        return a < b;
    });
    cout << nums[nums.size() - 1];
    return 0;
}