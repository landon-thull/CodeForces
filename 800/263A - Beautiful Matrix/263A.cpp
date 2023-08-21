#include<bits/stdc++.h>
using namespace    std;

void solve()
{
  // code here
  for (int i = 0; i < 25; ++i) {
    int n;
    cin >> n;

    if (n == 1) {
      int y = abs(3 - (i / 5 + 1));
      int x = abs(3 - (i % 5 + 1));

      cout << x + y;
    }
  }
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