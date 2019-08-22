#include<bits/stdc++.h>
using namespace std;

int findMaxSequence(int ar[], int n)
{
    int mx_count = 0, mx_idx = -1, prev_zero_pos = -1, cnt = 0;

    for(int i = 0; i < n; i++) {
        if(ar[i] == 1) cnt++;
        else {
            cnt = i - prev_zero_pos;
            prev_zero_pos = i;
        }

        if(cnt > mx_count) {
            mx_count = cnt;
            mx_idx = prev_zero_pos;
        }
    }
    return mx_idx;
}
int main()
{
    int ar[] = {0, 0, 1, 0, 1, 1, 1, 0, 1, 1};
    int n = sizeof(ar)/sizeof(ar[0]);

    int ans = findMaxSequence(ar, n);

    if( ans != -1) cout << "Index to be replaced is " << ans << endl;
    else cout << "Invalid input" << endl;
    return 0;
}
