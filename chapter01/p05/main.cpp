#include <iostream>

using namespace std;

bool is_prime(int const n)
{
  if (n <= 3)
  {
    return n > 1;
  }

  if (n % 2 == 0 || n % 3 == 0)
  {
    return false;
  }

  for (int i = 5; i * i <= n; i += 6)
  {
    if (n % i == 0 || n % (i + 2) == 0)
    {
      return false;
    }
  }

  return true;
}

int main()
{
  int limit = 0;
  cout << "Enter upper limit: ";
  cin >> limit;

  if (limit < 2)
  {
    cout << "The upper limit must be greater than 1." << endl;
    return 1;
  }

  for (int n = limit; n > 6; --n)
  {
    if (is_prime(n) && is_prime(n - 6))
    {
      cout << "(" << n - 6 << ", " << n << ")" << endl;
    }
  }
}