#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum;
    cin >> n;
    int ar[n+1] = {0};
    for(int i = 1; i <= n; i++) {
        cin >> ar[i];
    }
    for(int i = 1; i <= n; i++) {
        if(ar[i] != i){
            return cout << "Missing Number : " << i << endl, 0;
        }
    }
    cout << "No missing number are found!" << endl;
    return 0;
}
