#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, sum = 0;
    cin >> n;
    int ar[n];

    for(int i = 0; i < n; i++){
         cin >> ar[i];
         sum += ar[i];
    }

    cout << "Duplicate Number : " << sum - (n*(n-1))/2 << endl;

    return 0;
}

