#include<bits/stdc++.h>
using namespace std;

void firstNonRepeatedChar(string s)
{
    int data[256] = {0};

    for(char x : s) data[x]++;

    for(char x : s) {
        if(data[x] == 1) {
           cout << x << endl;
           break;
        }
    }
}

int main()
{
    string s;
    cin >> s;
    firstNonRepeatedChar(s);
    return 0;
}