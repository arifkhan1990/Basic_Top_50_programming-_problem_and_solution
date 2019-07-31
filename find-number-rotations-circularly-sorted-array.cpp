#include<bits/stdc++.h>
using namespace std;

int rotationCount(int ar[], int n)
{
    int lo = 0, hi = n - 1;

    while(lo <= hi) {
        if(ar[lo] <= ar[hi]) return lo;

        int mid = (lo+hi)/2;
        int next = (mid+1)%n;
        int prev = (mid - 1)%n;

        if(ar[mid] <= ar[next] and ar[mid] <= ar[prev]) return mid;
        else if(ar[mid] <= ar[hi]) hi = mid - 1;
        else if(ar[mid] >= ar[lo]) lo = mid + 1;
    }
    return -1;
}
int main(void)
{
	int arr[] = { 8, 9, 10, 2, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int cnt = rotationCount(arr, n);
	printf("The array is rotated %d times\n", cnt);

	return 0;
}
