#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int partition(int *arr, int l, int r) {
  int piv = arr[rand() % r + l];
  int i = l - 1;
  int j = r + 1;
  while (true) {
    do {
      i++;
    } while (arr[i] < piv);

    do {
      j--;
    } while (arr[j] > piv);

    if (i >= j)
      return j;

    swap(arr[i], arr[j]);
  }
}

void quickSort(int *arr, int l, int r) {
  if (l < r) {
    int piv = partition(arr, l, r);
    quickSort(arr, l, piv);
    quickSort(arr, piv + 1, r);
  }
}

void print(int *arr, int n) {
  for (int i = 0; i < n; ++i)
    cout << arr[i] << " ";
  cout << '\n';
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  // Seed the random number generator
  srand(time(nullptr));

  quickSort(arr, 0, n - 1);
  print(arr, n);

  return 0;
}
