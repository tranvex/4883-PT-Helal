#include <iostream>
using namespace std;

int looper(int);

int main() {
  int i, j, len, maxLen, ti, tj = 0;

  while (cin >> i >> j) {
    ti = min(i, j);
    tj = max(i, j);

    for (int x = ti; x <= tj; x++) {
      len = looper(x);
      if (len > maxLen) {
        maxLen = len;
      }
    }
    cout << i << " " << j << " " << maxLen << endl;
    maxLen = 0;
  }
  return 0;
}

int looper(int n) {
  int len = 1;
  while (n > 1) {
    if (n % 2 == 1) {
      n = (3 * n) + 1;
    } 
    else {
      n = n / 2;
    }
    len++;
  }
  return len;
}