#include <bits/stdc++.h>
using namespace std;

int PrimeTime(int num) {
   int n = 2;
   if(num == 1) return 0;

   while(n*n <= num) {
       if(num%n == 0) return 0;

       n += 1;
   }
  return 1;
}

int main() {

  int n;
  cin >> n;
  cout << (PrimeTime(n)? "true":"false" );
  return 0;

}
