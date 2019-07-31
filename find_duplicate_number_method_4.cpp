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
        for(int j = i+1; j <n ;j++)
           if(ar[i] == ar[j]) cout << ar[j] << " ";
    }
    cout << endl;
    return 0;
}

