// 8-14-2023  4A - Watermelon  0 KB  30 MS

#include <iostream>

using namespace std;

int main()
{
  int weight;
  cin >> weight;

  if (weight % 2 == 0 && weight > 2) 
  {
    cout << "YES";
  }
  else 
  {
    cout << "NO";
  }

  return 0;
}
