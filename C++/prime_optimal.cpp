#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int input = 5;

  for (int i = 2; i < sqrt(input); i++) {
    if (input <= 1) {
      cout << "input " << input << " is invalid" << endl;
    }
    if (input % i == 0) {
      cout << "not prime";
      break;
    } else {
      cout << "prime";
      break;
    }
  }
  return 0;
}
