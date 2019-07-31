#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int ar[n+1];
    for(int i = 0; i < n ; i++) cin >> ar[i];

    int a = ar[0], b = 1;

    for(int i = 1; i < n; i++) a ^= ar[i];
    for(int i = 2; i <= n+1; i++) b ^= i;

    cout << "Missing Number : " <<(a^b) << endl;
    return 0;
}
