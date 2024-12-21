#include <iostream>
using namespace std;

int main() {
  int input = 12345;
  // Using Arithmatic operations
  int rev = 0;
  int rem;
  while (input != 0) {
    rem = input % 10;
    rev = (rev * 10) + rem;
    input = input / 10;
  }
  cout << rev << endl;
  return 0;
}
