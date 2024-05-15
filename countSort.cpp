// ﷽
// Contest: Codeforces Round 321 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/580/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 25 Apr 2024 09:40:06 PM EET
//
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#ifdef MOHAMED
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define OO 1e8
#define endl "\n"

template <typename T> istream &operator>>(istream &input, vector<T> &data) {
  for (T &x : data)
    input >> x;
  return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data) {

  for (const T &x : data)
    output << x << " ";
  return output;
}
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
vector<vi> adj;
vi visited;
queue<int> q;
vi bfs(int src, vector<vi> &adj) {
  vi distance(adj.size(), 0);
  distance[src] = 0;
  q.push(src);
  while (!q.empty()) {
    int cur = q.front();
    q.pop();
    // process node s
    for (auto u : adj[cur]) {
      if (!distance[u]) {
        distance[u] = distance[cur] + visited[u];
        q.push(u);
      }
    }
  }
  return distance;
}
void sortColors(vector<int> &nums) {
  int n = nums.size();
  int frq[3] = {0};
  for (auto &it : nums)
    frq[it]++;
  nums.clear();
  cout << endl;
  debug(frq);
  for (int i = 0; i < 3; ++i) {
    while (frq[i]--) {
      nums.push_back(i);
    }
  }
}
int32_t main() {

  vector<int> nums = {2, 0, 2, 1, 1, 0};
  sortColors(nums);
  for (auto &it : nums)
    cout << it << " ";
  return 0;
}
