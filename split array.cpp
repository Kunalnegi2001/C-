#include <iostream>
using namespace std;
int
main ()
{

  int n, i, j, x, k;

  cout << "Enter the number of elements: ";
  cin >> n;
  int a[n], b[x], c[k];
  for (int i = 0; i <= (n - 1); i++)
    {
      cout << "Enter number for A[" << i << "]: ";
      cin >> a[i];
    }
  for (i = 0; i <= (n - 1); i++)
    {
      cout << a[i] << ",";
    }
  cout << endl;

  for (i = 0, x = 0; x <= ((n - 1) / 2); i++, x++)
    {
      b[x] = a[i];
      cout << b[x] << ",";
    }
  cout << endl;
  for (j = ((n + 1) / 2), k = 0; j <= (n - 1); j++, k++)
    {
      c[k] = a[j];
      cout << c[k] << ",";

    }

  return 0;

}
