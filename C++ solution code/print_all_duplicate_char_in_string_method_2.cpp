#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int cnt = 0, p  = 0, ar[256] = {0};
    getline(cin, s);
    char ans[26];
    for(int i = 0 ; i < s.size(); i++) {
        cnt = 1;

      if(ar[(int)s[i]] == 0 and s[i] != ' ') {
        for(int j = i + 1; j < s.size(); j++) {
            if(s[i] == s[j]) cnt++;
        }

        if(cnt > 1) ans[p++] = s[i];
        ar[(int)s[i]] = 1;
       }
    }
    for(int i = 0; i < p; i++) cout << ans[i] << endl;
    return 0;
}
