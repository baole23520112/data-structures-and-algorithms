stack<int> st;
    int res = INT_MIN;
    int i = 0;
    while(i < n){
        if (st.empty() || a[i] >= a[st.top()]){
            st.push(i);
            i++;
        }
        else {
            while(!st.empty() && a[i] < a[st.top()]){
                int cc = a[st.top()];
                if (st.size() > 1){
                    st.pop();
                    int cr = i - 1 - st.top();
                    res = max(res, cr * cc);
                }
                else {
                    st.pop();
                    int cr = i;
                    res = max(res, cr * cc);
                }
            }
            // st.push(i);
            // i++;
        }
    }
    while(a[i] < a[st.top()]){
        int cc = a[st.top()];
        if (st.size() > 1){
            st.pop();
            int cr = i - 1 - st.top();
            res = max(res, cr * cc);
        }
        else {
            st.pop();
            int cr = i;
            res = max(res, cr * cc);
        }
    }
    cout << res;