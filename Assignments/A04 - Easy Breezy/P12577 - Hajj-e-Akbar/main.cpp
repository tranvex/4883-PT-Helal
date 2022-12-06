#include <iostream>
#include <string>
using namespace std;

int main() {
  string state = "";
  int count = 0;
  
  while (cin >> state && state != "*") {
    count ++;
    if (state == "Hajj") {
      cout << "Case " << count << ": Hajj-e-Akbar" << endl;
    }
    else if (state == "Umrah") {
      cout << "Case " << count << ": Hajj-e-Asghar" << endl;
    }
  }
  return 0;
}