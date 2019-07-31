#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> n;
    int ar[n];

    for(int i = 0; i < n; i++) cin >> ar[i];

    cout << "Duplicate Number : ";
    for(int i = 0; i < n; i++) {
        if(ar[abs(ar[i])] > 0)
           ar[abs(ar[i])] = -ar[abs(ar[i])];
        else cout << abs(ar[i]) << " ";
    }
    cout << endl;
    return 0;
}
