#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s,int st, int ed)
{
    if(st == ed) return true;
    else if(s[st] != s[ed]) return false;
    else if(st < ed+1) checkPalindrome(s,++st,--ed);

    return true;
}

int main()
{
    string s;
    cin >> s;

    cout << (checkPalindrome(s,0,s.size()-1)? "Yes": "No") << endl;
    return 0;
}