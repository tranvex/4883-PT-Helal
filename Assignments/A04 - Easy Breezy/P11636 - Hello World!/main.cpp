#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int i = 0; // Number of inputs processed
  int num = 0; // Number being read in
  int tot = 1; // Number of hello worlds printed
  int count  = 0; // Number of copy/paste operations
  while (cin >> num) {
    if (num > 0) {
      i++;
      while (tot < num) {
        tot += tot;
        count++;
      }
      cout << "Case " << i << ": " << count << endl;
      count  = 0;
      tot = 1;
    }
  }
  return 0;
}