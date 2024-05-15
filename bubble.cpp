#include <algorithm>
#include <iostream>
using namespace std;

void bubble(int *arr, int n) {
  bool flag = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        flag = 1;
        swap(arr[j], arr[j + 1]);
      }
    }
    if (!flag) goto P;
    flag = 0;
  }
P:
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i) cin >> arr[i];
  bubble(arr, n);
}
