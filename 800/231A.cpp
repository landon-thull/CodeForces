// 8-16-2023  231A - Team  0 KB  30 MS

#include <iostream>

using namespace std;

int main()
{
  int c;
  cin >> c;

  int imp = 0;

  for (int i = 0; i < c; ++i)
  {
    int a, b, c;

    cin >> a >> b >> c;

    if (a + b + c > 1)
    {
      ++imp;
    }
  }

  cout << imp;
  return 0;
}
