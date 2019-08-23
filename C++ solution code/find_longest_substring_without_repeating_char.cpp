#include<bits/stdc++.h>
using namespace std;

int findLongestSubstring(string st,)
{
    int ln = st.size(), s = 0, e = 0, mxlen = 0;
    bool data[256] = {false};

    while(e < ln) {
        if(data[st[e]]) {
            mxlen = max(mxlen, e  - s);
            while(st[s] != st[e]) {
                data[st[s]] = false;
                s++;
            }
            s++;e++;
        }else {
            data[st[e]] = true;
            e++;
        }
    }
    mxlen = max(mxlen, ln - s);
    return mxlen;
}

int main()
{
    string s;
    cin >> s;

    cout << findLongestSubstring(s) << endl;
    return 0;
}