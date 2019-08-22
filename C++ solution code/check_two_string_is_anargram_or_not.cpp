#include<bits/stdc++.h>
using namespace std;

bool checkAnargaram(string s1, string s2)
{
    int l1, l2;
    int data[256] = {0};
    l1 = s1.size(), l2 = s2.size();

    if(l1 != l2) return false;

    for(int i = 0; i < l1; i++) {
        data[s1[i]]++;
        data[s2[i]]--;
    }

    for(int i = 0; i < 256; i++) {
        if(data[i]) return false;
    }
    
    return true;
}
int main()
{
    string s1,s2;
    cin >> s1 >> s2;

    cout << (checkAnargaram(s1, s2)? "Yes" : "No") << endl;

    return 0;
}