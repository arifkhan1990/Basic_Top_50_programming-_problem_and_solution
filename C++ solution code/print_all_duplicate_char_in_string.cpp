#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char ans[256];
    int countDuplicateChar[256] = {0};
    int n, m;
    getline(cin, s);

    for(int i = 0; i < s.size(); i++) {
            countDuplicateChar[s[i]]++;
    }

    for(int i  = 0; i < 256 ; i++) {
         if(countDuplicateChar[i] > 1) cout << (char)i << endl;
    }
    return 0;
}
