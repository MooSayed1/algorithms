#include <bits/stdc++.h>
using namespace std;

void inserstionSort(int *arr, int n) {
  for (int i = 1; i < n; ++i) {
    int key = arr[i];
    int j = i - 1;
    for (; j >= 0 && arr[j] > key; arr[j + 1] = arr[j], --j) {
    }
    arr[j + 1] = key;
  }
}
int main() {

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i)
    cin >> arr[i];
  inserstionSort(arr, n);
  for (auto &it : arr)
    cout << it << " ";

  return 0;
}
