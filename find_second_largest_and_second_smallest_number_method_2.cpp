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

    cout << "First Largest Number : " << ar[n-1] << endl;
    cout << "Second Largest Number : " << ar[n-2] << endl;
    cout << "First Smallest Number: " << ar[0] << endl;
    cout << "Second Smallest Number: " << ar[1] << endl;

    return 0;
}


