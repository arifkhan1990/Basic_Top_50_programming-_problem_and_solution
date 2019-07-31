#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int ar[n+1] = {0};
    for(int i = 1; i <= n; i++) {
        cin >> k;
        ar[k] = 1;
    }
    for(int i = 1; i <= n; i++) {
        if(ar[i] == 0){
            return cout << "Missing Number : " << i << endl, 0;
        }
    }
    cout << "No missing number are found!" << endl;
    return 0;
}

