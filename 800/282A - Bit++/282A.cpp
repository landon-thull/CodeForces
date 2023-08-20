#include <iostream>
using namespace std;

void solve() {
  // code here
	int n;
	cin >> n;

	int s = 0;

	while (n--) {
		string x;
		cin >> x;

		if (x[1] == '-') {
			s--;
		} else {
			s++;
		}
	}

	cout << s;
}

int main() {
  #ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);   // can need to change file . this one for taking input
    freopen("output.txt", "w", stdout); // this one for output
  #endif

  // iterator here
  solve();

  #ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

  return 0;
}
