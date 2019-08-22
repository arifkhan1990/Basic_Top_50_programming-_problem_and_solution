#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, largestNum = INT_MIN, smallestNum = INT_MAX;
    cin >> n;
    int ar[n+1];

    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    sort(ar,ar+n);
    cout << "Largest Number : " << ar[n-1] << endl;
    cout << "Smallest Number: " << ar[0] << endl;
    return 0;
}

