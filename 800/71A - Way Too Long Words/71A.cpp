#include<bits/stdc++.h>
using namespace    std;

void solve()
{
  // code here
  string s;
  cin >> s;

  if (s.length() <= 10) {
    cout << s << endl;
  } else {
    cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
  }
}

int main() {
  #ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin); //can need to change file . this one for taking input
    freopen("output.txt","w",stdout); // this one for output
  #endif

  // iterator here
  int n;
  cin >> n;

  while (n--) {
    solve();
  }

  #ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

  return 0;
}