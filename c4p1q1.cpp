#include <iostream>
using namespace std;

int main() {

  int arr[4][5];

  arr[0][0] = 16;
  arr[0][1] = 22;
  arr[0][2] = 99;
  arr[0][3] = 4;
  arr[0][4] = 18;
  arr[1][0] = -258;
  arr[1][1] = 4;
  arr[1][2] = 101;
  arr[1][3] = 5;
  arr[1][4] = 98;
  arr[2][0] = 105;
  arr[2][1] = 6;
  arr[2][2] = 15;
  arr[2][3] = 2;
  arr[2][4] = 45;
  arr[3][0] = 33;
  arr[3][1] = 88;
  arr[3][2] = 72;
  arr[3][3] = 16;
  arr[3][4] = 3;


  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      cout << arr[i][j] << "\t ";
    }
    cout << endl;
  }

  return 0;
}

