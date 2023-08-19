#include<bits/stdc++.h>
using namespace    std;

void solve()
{
  int m, n;
  cin >> m >> n;
  cout << m * n / 2 << endl;
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