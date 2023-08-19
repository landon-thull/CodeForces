#include<bits/stdc++.h>
using namespace    std;

void solve()
{
  // code here
  int n, k;
  cin >> n >> k;

  int r = 0;
  int kv = 0;

  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;

    if (i == k - 1) {
      kv = x;
    }

    if (x >= kv && x > 0) {
      ++r;
    }
  }

  cout << r;
}

int main() {
  #ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin); //can need to change file . this one for taking input
    freopen("output.txt","w",stdout); // this one for output
  #endif

  // iterator here
  solve();

  #ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

  return 0;
}