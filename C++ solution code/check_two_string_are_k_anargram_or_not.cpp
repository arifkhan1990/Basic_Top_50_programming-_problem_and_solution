#include<bits/stdc++.h>
using namespace std;

bool checkAnargram(string s1, string s2, int k)
{
    int len1 = s1.size(), len2 = s2.size();
    if(len1 != len2) return false;
    int data[256] = {0};

    for(int i = 0; i < len1; i++) {
        data[s1[i] - 'a']++;
    }

    int cnt = 0;
    for(int i = 0; i < len2; i++) {
        if(data[s2[i]-'a'] > 0) data[s2[i]-'a']--;
        else cnt++;
        if(cnt > k) return false;
    }

    return true;
}
int main()
{
    string s1, s2;
    int k;
    cin >> s1 >> s2 >> k;
    cout << (checkAnargram(s1, s2, k)?"YES":"NO") << endl;
    return 0;
}