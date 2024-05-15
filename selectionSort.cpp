
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
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
    if (!flag)
      goto P;
    flag = 0;
  }
P:
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
void selection(int *arr, int n) {
  for (int i = 0; i < n - 1; ++i) {
    int ind = i;
    int minn = arr[i];
    for (int j = i + 1; j < n; ++j) {
      if (arr[j] < minn) {
        minn = arr[j];
        ind = j;
      }
    }
    swap(arr[i], arr[ind]);
  }

}

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
  selection(arr, n);
  for (auto &it : arr)
    cout << it << " ";
}
