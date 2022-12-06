#include <iostream>
#include <string>
using namespace std;

int main() {
  int test;
  string num;

  cin >> test;
  while (test--) {
    cin >> num;
    if (num.length() == 5) {
      cout << "3\n";
    }
    else if ((num[0] == 't' && num[1] == 'w') || (num[0] == 't' && num[2] == 'o') || (num[1] == 'w' && num[2] == 'o')) {
      cout << "2\n";
    }
    else {
      cout << "1\n";
    }
  }
  return 0;
}