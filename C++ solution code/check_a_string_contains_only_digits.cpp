#include<bits/stdc++.h>
using namespace std;

bool checkDigits(string s)
{
    return all_of(s.begin(),s.end(), ::isdigit);
}

int main()
{
    string s;
    cin >> s;
    cout << (checkDigits(s)?"Yes":"No") << endl;
    return 0;
}