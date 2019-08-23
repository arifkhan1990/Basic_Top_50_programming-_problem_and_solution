#include<bits/stdc++.h>
using namespace std;

void permutation(string s, int start, int end)
{
    if(start == end - 1) {
        cout << s << endl;
        return;
    }

    for(int i = start; i < end; i++){
        swap(s[start], s[i]);
        permutation(s, start+1, end);
        swap(s[start], s[i]);
    }
}

int main()
{
    string s;
    cin >> s;
    permutation(s, 0,s.size());
    return 0;
}