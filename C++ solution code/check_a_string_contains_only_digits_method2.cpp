#include<bits/stdc++.h>
using namespace std;

bool checkDigits(string s)
{
    for(int x: s){
        if(!(x >= '0' and x <= '9'))
              return false;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    cout << (checkDigits(s)?"Yes":"No") << endl;
    return 0;
}