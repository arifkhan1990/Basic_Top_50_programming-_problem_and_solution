#include<bits/stdc++.h>
using namespace std;

void findMaxSequenceOne(int ar[], int n, int k)
{
    int lf = 0, cnt = 0, mxOne = 0, lfidx = 0;

    for(int i = 0; i < n; i++) {
        if(ar[i] == 0) cnt++;

        while(cnt > k) {
            if(ar[lf++] == 0) cnt--;
        }

        if(i - lf + 1 > mxOne) {
            mxOne = i - lf + 1;
            lfidx = lf;
        }
    }
    cout << "The Longest sequence has length " << mxOne << " from index " << lfidx << " to " << lfidx + mxOne - 1 << endl;
}
int main()
{
    int ar[] = {1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0};
    int n = sizeof(ar)/sizeof(ar[0]), k = 2;

    findMaxSequenceOne(ar, n, k);

    return 0;
}

