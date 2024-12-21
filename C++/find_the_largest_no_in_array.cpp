#include <iostream>
using namespace std;

int main() {
  int arr[] = {11, 12, 23, 41, 57, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  int max = arr[0];

  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  cout << "MAX Element: " << max << endl;

  return 0;
};
