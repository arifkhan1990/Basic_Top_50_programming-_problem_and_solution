#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[] = {1, 5, 2, 3, 4, 4, 1, 5, 5};
    int n = sizeof(ar) / sizeof(ar[0]);
    int br[n+1],k = 0, b = 0;
    sort(ar,ar+n);
    for(int i = 0; i < n-1; i++) {
            if(ar[i] != ar[i+1]) br[k++] = ar[i];
    }
    br[k++] = ar[n-1];

    for(int i = 0 ; i < k; i++) cout << br[i] << " ";
    cout << endl;
    return 0;
}

