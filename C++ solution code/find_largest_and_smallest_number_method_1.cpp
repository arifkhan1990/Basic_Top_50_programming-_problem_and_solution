#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, largestNum = INT_MIN, smallestNum = INT_MAX;
    cin >> n;
    int ar[n+1];

    for(int i = 0; i < n; i++) {
        cin >> m;
        if(largestNum < m) largestNum = m;

        if(smallestNum > m) smallestNum = m;
    }

    cout << "Largest Number : " << largestNum << endl;
    cout << "Smallest Number: " << smallestNum << endl;
    return 0;
}
