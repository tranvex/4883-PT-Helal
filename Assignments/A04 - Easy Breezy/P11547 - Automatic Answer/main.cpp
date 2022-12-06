#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int cases, num = 0;
  long long int ans = 0;
  cin >> cases;
  while (cases--) {
    cin >> num;
    ans = abs(((((((num * 567) / 9) + 7492) * 235) / 47) - 498));
    cout << abs(((ans / 10) % 10)) << endl;
  }
  return 0;
}