#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m,sum = 0;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
        sum += ar[i];
    }
    int total_sum = (n+2)*(n+1)/2;

    cout <<"Missing Number : " << total_sum - sum << endl;
    return 0;
}
