#include <iostream>

using namespace std;

int main() {
  long long int A = 0;
  long long int B = 0;
    
  while (cin >> A >> B) {  
    cout << abs(A - B) << endl;
  }
  
  return 0;
}