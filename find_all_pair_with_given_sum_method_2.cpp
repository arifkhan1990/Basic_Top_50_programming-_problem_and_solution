#include<bits/stdc++.h>
using namespace std;

int b = 0;

void findPair(int ar[],int n, int sum)
{
    int lo = 0, hi = n-1;

    while(lo < hi) {
        if(ar[lo] + ar[hi] == sum) {
             cout << sum << " = " << ar[lo] << " + " << ar[hi] << endl;
             b = 1;
        }

        (ar[lo] + ar[hi] < sum) ? lo++:hi--;
    }

    if(!b) cout << "Pair are not found!" << endl;
}
int main()
{
    int n, m, sum;
    cin >> n >> sum;
    int ar[n+1];

    for(int i = 0; i < n; i++) cin >> ar[i];

    sort(ar, ar+n);
    findPair(ar, n , sum);
    return 0;
}



