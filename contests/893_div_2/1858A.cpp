// 8-17-2023  1858A - Buttons (Round 593)  0 KB  78 MS

#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;

    int k = c / 2;
    a = a + c - k;
    b = b + k;

    if (a > b)
    {
    cout << "First\n";
    continue;
    }

    cout << "Second\n";
  }

  return 0;
}
