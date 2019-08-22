#include<bits/stdc++.h>
using namespace std;

bool checkAnargram(string s1, string s2)
{
    int l1 = s1.size(), l2 = s2.size();

    if(l1 != l2) return false;

    int val = 0;
    for(int i = 0; i < l1; i++) {
        val ^= (int)s1[i];
        val ^= (int)s2[i];
    }
    return val == 0;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << (checkAnargram(s1, s2)?"YES":"NO") << endl;
    return 0;
}