#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> n;
    int ar[n+1] = {0};

    for(int i = 1; i <= n; i++) {
        cin >> m;
        ar[m]++;
    }
    cout << "Duplicate Number : ";
    for(int i = 1; i <= n; i++) {
        if(ar[i] > 1) cout << i << " ";
    }
    cout << endl;
    return 0;
}
