#include <iostream>
#include <stack>
using namespace std;

int main() {
  int coaches = 0;
  int currCoach = 1;
  int wantedIdx = 0;
  int wanted[1000];
  stack<int> current;

  while (true) {
    cin >> coaches;
    if (coaches == 0) {
      break;
    }

    while (true) {
      cin >> wanted[0];
      if (wanted[0] == 0) {
        break;
      }

      for (int i = 1; i < coaches; i++) {
        cin >> wanted[i];
      }

      while (currCoach <= coaches) {
        current.push(currCoach);

        while (!current.empty() && current.top() == wanted[wantedIdx]) {
          current.pop();
          wantedIdx++;
          if (wantedIdx >= coaches) {
            break;
          }
        }
        currCoach++;
      }

      if (current.empty()) {
        cout << "Yes" << endl;
      } 
      else {
        cout << "No" << endl;
      }
      currCoach = 1;
      wantedIdx = 0;
      current = {};
    }
    cout << endl;
  }
  return 0;
}