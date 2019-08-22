#include<bits/stdc++.h>
using namespace std;


void findSubArray(int ar[], int n)
{
    int sum = 0, b = 0;
    cout << "Find Sub Array are : " << endl;
    for(int i = 0; i < n; i++) {
            sum = 0, b = 0;
        for(int j = i; j < n; j++) {
            sum += ar[j];
            b = 0;
            if(sum == 0) {
                for(int k = i; k <= j; k++) {
                    cout << ar[k] << " ";
                    b = 1;
                }
            }
            if(b)cout << endl;
        }
    }
}
int main()
{
    int m;
    int arr[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
	int n = sizeof(arr)/sizeof(arr[0]);

	findSubArray(arr, n);
    return 0;
}
