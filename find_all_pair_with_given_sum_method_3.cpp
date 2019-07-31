#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , m, sum, b = 0;
    map<int, int>mp;

    cin >> n >> sum;

    for(int i = 0; i < n; i++) {
        cin >> m;
        if(mp.find(sum - m) != mp.end()) {
            cout << sum << " = " << sum - m << " + " << m << endl;
            b = 1;
        }
        mp[m] = i;
    }
    if(!b) cout << "Pair are not found!\n";
    return 0;
}
