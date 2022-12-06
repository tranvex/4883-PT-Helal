#include <iostream>
using namespace std;

int main() {
  int n, k, newCigs, rem, tot = 0;
  while (cin >> n >> k) {
    tot = n;
    newCigs = n;
    while (newCigs >= k) {
      rem = newCigs%k;
      newCigs/=k;
      tot+=newCigs;
      newCigs+=rem;
    }
    cout << tot << endl;
  }
  return 0;
}