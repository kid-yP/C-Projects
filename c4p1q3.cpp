#include <iostream>
using namespace std;

int main() {
  int first[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int second[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};


  int result[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      result[i][j] = first[i][j] + second[i][j];
    }
  }

  cout << "The sum of the two arrays is: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << result[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}

