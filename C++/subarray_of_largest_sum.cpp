// Kadane's algorithm
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int arr[] = {-1, 1, -3, 4, -1, 2, 1, -5, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  int max = arr[0];
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
    max = std::max(max, sum);
    if (sum < 0) {
      sum = 0;
    }
  }
  cout << "MAX Sum of Sub-array: " << max << endl;

  return 0;
};
