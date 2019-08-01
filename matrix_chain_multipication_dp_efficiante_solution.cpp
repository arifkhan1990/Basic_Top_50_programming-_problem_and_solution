#include<bits/stdc++.h>
using namespace std;

int ans[1001][1001];
int matrixChainMultiplication(int mtx[], int n)
{
    for(int i = 1; i <= n; i++ ) ans[i][i] = 0;

    for(int i = 2; i <= n; i++) {
        for(int j = 1; j <= n - i + 1; j++) {
            int k = j + i - 1;
            ans[j][k] = INT_MAX;

            for(int p = j; k < n and p <= k - 1; p++) {
                int cost = ans[j][p] + ans[p+1][k] + mtx[j - 1] * mtx[p] * mtx[k];
                if(cost < ans[j][k]) ans[j][k] = cost;
            }
        }
    }
    return ans[1][ n - 1];
}
int main()
{
    int mtx[] = {10, 30 , 5, 60};
    int n = sizeof(mtx)/sizeof(mtx[0]);

    cout << "Minimum Cost is : " << matrixChainMultiplication(mtx, n) << endl;
    return 0;
}

