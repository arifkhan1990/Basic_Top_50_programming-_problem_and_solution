#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, sum, b = 0;
    cin >> n >> sum;
    int ar[n+1];

    for(int i = 0; i < n; i++) cin >> ar[i];

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(ar[i] + ar[j] == sum) {
                    cout << sum << " = " << ar[i] << " + " << ar[j] << endl;
                    b = 1;
            }
        }
    }
    if(!b) cout << "Pair element are not found!" << endl;
    return 0;
}


