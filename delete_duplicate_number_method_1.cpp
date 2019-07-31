#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int br[n+1],k = 0, b = 0;
    for(int i = 0; i < n-1; i++) {
            b = 0;
        for(int j = 0; j < n; j++) {
            if(i != j and arr[i] == arr[j]) {
                b  = 1;
                break;
            }
        }
        if(!b) br[k++] = arr[i];
    }

    for(int i = 0 ; i < k; i++) cout << br[i] << " ";
    cout << endl;
    return 0;
}
