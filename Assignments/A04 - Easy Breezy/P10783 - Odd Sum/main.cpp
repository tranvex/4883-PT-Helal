#include <iostream>
using namespace std;

int main() {
  int cases, x, y, num, ans = 0;
  cin >> cases;
  for (int i = 0; i < cases; i++) {
    cin >> x >> y;
    if (x > y) {
      swap (x, y);
    }
    for (int j = x; j <= y; j++) {
      if (j % 2 != 0) {
        ans+=j;
      }
    }
    num++;
    cout << "Case " << num << ": " << ans << endl;
    ans = 0;
  }
  return 0;
}