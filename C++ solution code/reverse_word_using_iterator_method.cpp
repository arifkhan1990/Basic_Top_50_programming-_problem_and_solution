#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    string s;
    cin >> s;
    auto start = s.begin();
    auto end = s.end();

    while(distance(start,end) > 0) {
        swap(*(start++),*(--end));
    }

    cout << s << endl;
    return 0;
}