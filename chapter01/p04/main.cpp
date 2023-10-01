#include <iostream>

bool is_prime(int const n)
{
  if (n < 2)
  {
    return false;
  }

  for (int i = 2; i < n; ++i)
  {
    if (n % i == 0)
    {
      return false;
    }
  }

  return true;
}

bool is_prime_2(int const n)
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
  int n = 0;
  std::cout << "Enter a number for input count: ";
  std::cin >> n;

  if (n < 2)
  {
    std::cout << "The number for input count must be greater than 1." << std::endl;
    return 1;
  }

  for (int i = n - 1; i > 1; --i)
  {
    if (is_prime_2(i))
    {
      std::cout << "The largest prime number under " << n << " is " << i << std::endl;
      return 0;
    }
  }
}