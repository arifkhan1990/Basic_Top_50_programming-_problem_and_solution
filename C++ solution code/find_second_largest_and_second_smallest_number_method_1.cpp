#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, firstLargestNum = INT_MIN, firstSmallestNum = INT_MAX, secondLargestNum = INT_MIN,secondSmallestNum = INT_MAX;
    cin >> n;
    int ar[n+1];

    for(int i = 0; i < n; i++) {
        cin >> m;
        if(firstSmallestNum > m) {
                secondSmallestNum = firstSmallestNum;
                firstSmallestNum = m;
        }else if(m < secondSmallestNum && m != firstSmallestNum) {
            secondSmallestNum = m;
        }

        if(firstLargestNum < m) {
                secondLargestNum = firstLargestNum;
                firstLargestNum = m;
        }else if(m > secondLargestNum && m != firstLargestNum) {
                secondLargestNum = m;
        }
    }

    cout << "First Largest Number : " << firstLargestNum << endl;
    cout << "Second Largest Number : " << secondLargestNum << endl;
    cout << "First Smallest Number: " << firstSmallestNum << endl;
    cout << "Second Smallest Number: " << secondSmallestNum << endl;

    return 0;
}

