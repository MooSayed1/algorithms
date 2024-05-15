#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
  int n1 = m - l + 1;
  int n2 = r - m;

  int temp[r - l + 1];

  int i = l;
  int j = m + 1;
  int k = 0;

  while (i <= m && j <= r) {
    if (arr[i] <= arr[j]) {
      temp[k++] = arr[i++];
    } else {
      temp[k++] = arr[j++];
    }
  }

  while (i <= m) {
    temp[k++] = arr[i++];
  }

  while (j <= r) {
    temp[k++] = arr[j++];
  }

  for (int p = 0; p < k; p++) {
    arr[l + p] = temp[p];
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << "\n";
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (auto &it : arr)
    cin >> it;

  mergeSort(arr, 0, n - 1);

  printArray(arr, n);
  return 0;
}
