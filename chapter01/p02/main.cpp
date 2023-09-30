#include <iostream>

unsigned int gcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }

  return gcd(b, a % b);
}

int main()
{
  int a = 0;
  int b = 0;

  std::cout << "Enter a number for A: ";
  std::cin >> a;
  if (a < 0)
  {
    std::cout << "The number for A must be a positive integer." << std::endl;
    return 1;
  }

  std::cout << "Enter a number for B: ";
  std::cin >> b;
  if (b < 0)
  {
    std::cout << "The number for B must be a positive integer." << std::endl;
    return 1;
  }

  unsigned int result = gcd(a, b);
  std::cout << "The greatest common divisor of " << a << " and " << b << " is " << result << std::endl;
}
