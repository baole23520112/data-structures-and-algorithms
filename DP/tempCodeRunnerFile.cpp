int n, s, res = INT_MAX;
// int a[105];
// void dfs(int sum, int cnt)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (sum + a[i] <= s)
//         {
//             if (sum + a[i] == s)
//             {
//                 res = min(res, cnt + 1);
//             }
//             else if (sum + a[i] < s)
//                 dfs(sum + a[i], cnt + 1);
//         }
//     }
// }

// int main()
// {
//     cin >> n >> s;
//     for (int i = 1; i <= n; i++) cin >> a[i];
//     dfs(0, 0);
//     cout << res;
//     return 0;
// }