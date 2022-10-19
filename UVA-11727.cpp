#include <iostream>
using namespace std;

void foo(int x, int y, int z)
{
  if (x < y && y < z)
  {
    cout << y << endl;
  }
  else if (y < x && x < z)
  {
    cout << x << endl;
  }
  else if (y < z && z < x)
  {
    cout << z << endl;
  }
  else
  {
    foo(y, z, x);
  }
}

int main()
{
  int n;
  cin >> n;
  if (n > 19 ){return 0;}
  for (int i = 0; i < n; i++)
  {
    int x, y, z;
    cin >> x >> y >> z;
    cout << "Case " << i+1 << ": ";
    foo(x, y, z);
  }
  return 0;
}
