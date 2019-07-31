#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> n;
    int ar[n];

    for(int i = 0; i < n; i++) cin >> ar[i];
    sort(ar,ar+n);
    cout << "Duplicate Number : ";
    for(int i = 0; i < n-1; i++) {
        if(ar[i] == ar[i+1])
            cout << ar[i+1] << " ";
    }
    cout << endl;
    return 0;
}

