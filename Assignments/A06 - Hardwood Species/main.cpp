#include <iomanip>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  cout << setprecision(4) << fixed;
  map<string, int> trees;
  string tree;
  int num = 0;
  double tot = 0;

  cin >> num;
  cin.ignore();
  getline(cin, tree);

  while (num) {
    while (getline(cin, tree)) {
      if (tree == "") {
        break;
      }
      if (trees.find(tree) == trees.end()) {
        trees.insert(pair<string, int>(tree, 1));
        tot++;
      } else {
        trees.at(tree)++;
        tot++;
      }
    }

    for (pair<string, int> it : trees) {
      cout << it.first << " " << (it.second / tot) * 100 << endl;
    }
    
    num--;
    trees.clear();
    tot = 0;

    if (num >= 1) {
      cout << endl;
    }
  }
  return 0;
}