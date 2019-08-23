#include<bits/stdc++.h>
using namespace std;

long long factorial(long n)
{
    return n < 1 ? 1 : n * factorial(n-1);
}
int main()
{
    long n;
    cin >> n;
    cout << (factorial(n)) << endl;
    return 0;
}