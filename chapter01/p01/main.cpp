#include <iostream>

int main()
{
  int limit = 0;
  std::cout << "Enter an upper limit: ";
  std::cin >> limit;

  std::cout << limit << std::endl;

  if (limit < 0)
  {
    std::cout << "The upper limit must be a positive integer." << std::endl;
    return 1;
  }

  unsigned long long sum = 0;
  for (unsigned int i = 0; i <= limit; ++i)
  {
    if (i % 3 == 0 || i % 5 == 0)
    {
      sum += i;
    }
  }

  std::cout << "The sum of all multiples of 3 or 5 below " << limit << " is " << sum << std::endl;
}