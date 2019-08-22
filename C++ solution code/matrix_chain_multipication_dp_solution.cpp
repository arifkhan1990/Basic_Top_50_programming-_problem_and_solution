#include<bits/stdc++.h>
using namespace std;

int ans[1001][1001];
int matrixChainMultiplication(int mtx[], int l , int r)
{

    if(r <= l + 1) return 0;

    int mn = INT_MAX;

    if(ans[l][r] == 0) {
        for(int i = l + 1; i < r; i++) {
            int cost = matrixChainMultiplication(mtx, l, i);
            cost += matrixChainMultiplication(mtx, i, r);
            cost += mtx[l] * mtx[i] * mtx[r];

            if(cost < mn) mn = cost;
        }
        ans[l][r] = mn;
    }
    return ans[l][r];
}
int main()
{
    int mtx[] = {10, 30 , 5, 60};
    int n = sizeof(mtx)/sizeof(mtx[0]);

    cout << "Minimum Cost is : " << matrixChainMultiplication(mtx, 0, n-1) << endl;
    return 0;
}
