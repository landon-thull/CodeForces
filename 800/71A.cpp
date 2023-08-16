// 8-15-2023  71A - Way Too Long Words  0 KB  15 MS

#include <iostream>

using namespace std;

int main()
{
  int len;
  cin >> len;

  for (int i = 0; i < len; i++)
  {
    string in;
    cin >> in;

    if (in.length() <= 10)
    {
      cout << in << endl;
    } else
    {
      cout << in[0] << in.length() - 2 << in[in.length() - 1] << endl;
    }
  }

  return 0;
}
