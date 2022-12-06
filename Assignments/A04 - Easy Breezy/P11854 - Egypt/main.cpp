#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  while (cin >> a >> b >> c) {
    if (a == 0 && b == 0 && c == 0) {
      return 0;
    }
    if (a != 0 && b != 0 && c != 0) {
      if ((a * a) + (b * b) == c * c || (b * b) + (c * c) == a * a ||
          (c * c) + (a * a) == b * b) {
        cout << "right" << endl;
      } else {
        cout << "wrong" << endl;
      }
    }
  }
  return 0;
}