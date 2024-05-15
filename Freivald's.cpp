#include <bits/stdc++.h>
using namespace std;

#define N 2

int freivald(int a[][N], int b[][N], int c[][N]) {
  bool r[N];
  for (int i = 0; i < N; i++) r[i] = random() % 2;

  int br[N] = {0};
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) br[i] = br[i] + b[i][j] * r[j];

  int cr[N] = {0};
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) cr[i] = cr[i] + c[i][j] * r[j];

  int axbr[N] = {0};
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) axbr[i] = axbr[i] + a[i][j] * br[j];

  for (int i = 0; i < N; i++)
    if (axbr[i] - cr[i] != 0) false;

  return true;
}

bool isProduct(int a[][N], int b[][N], int c[][N], int k) {
  for (int i = 0; i < k; i++)
    if (freivald(a, b, c) == false) return false;
  return true;
}

int main() {
  int a[N][N] = {{1, 1}, {1, 1}};
  int b[N][N] = {{1, 1}, {1, 1}};
  int c[N][N] = {{2, 2}, {2, 2}};
  int k = 2;
  if (isProduct(a, b, c, k))
    printf("Yes");
  else
    printf("No");
  return 0;
}
