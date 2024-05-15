#include <bits/stdc++.h>
using namespace std;

static bool cmp(pair<int, int> a, pair<int, int> b) {
  double r1 = (double)a.first / (double)a.second;
  double r2 = (double)b.first / (double)b.second;
  return r1 > r2;
}

double fractionalKnapsack(int W, vector<pair<int, int>>& arr) {
  sort(arr.begin(), arr.end(), cmp);

  double finalvalue = 0.0;

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i].second <= W) {
      W -= arr[i].second;
      finalvalue += arr[i].first;
    } else {
      finalvalue += arr[i].first * ((double)W / (double)arr[i].second);
      break;
    }
  }

  return finalvalue;
}

int main() {
  int W = 50;
  vector<pair<int, int>> arr = {{60, 10}, {100, 20}, {120, 30}};

  cout << fractionalKnapsack(W, arr);
  return 0;
}
