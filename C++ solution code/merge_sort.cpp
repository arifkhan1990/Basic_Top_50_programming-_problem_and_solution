#include<bits/stdc++.h>
using namespace std;

int ar[100];

void mergeSort(int lo, int hi)
{
    if(lo == hi) return;

    int mid = (lo+hi)/2;

    mergeSort(lo,mid);
    mergeSort(mid+1,hi);

    int i, j, k;
    int tmp[100];
    for(int i = lo, k = lo, j = mid+1; k <= hi; k++) {
        if(i == mid+1) tmp[k] = ar[j++];
        else if(j == hi+1) tmp[k] = ar[i++];
        else if(ar[i] < ar[j]) tmp[k] = ar[i++];
        else tmp[k] = ar[j++];
    }

    for(k = lo; k <= hi; k++) ar[k] = tmp[k];
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> ar[i];
    
    mergeSort(0, n-1);
    
    for(int i = 0; i < n; i++) cout << ar[i] << " ";
    return 0;
}