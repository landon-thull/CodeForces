#include<bits/stdc++.h>
using namespace    std;

void solve()
{
  // code here
  string a, b;
  cin >> a >> b;
  transform(a.begin(), a.end(), a.begin(), ::toupper);
  transform(b.begin(), b.end(), b.begin(), ::toupper);
  cout << a.compare(b);
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