#include <iostream>

unsigned int gcd(int const a, int const b)
{
  if (b == 0)
  {
    return a;
  }

  return gcd(b, a % b);
}

unsigned int lcm(int const a, int const b)
{
  int h = gcd(a, b);
  if (h == 0)
  {
    return 0;
  }

  return (a * b) / h;
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

  std::vector<int> numbers;
  for (int i = 0; i < n; i++)
  {
    int v{0};
    std::cin >> v;
    numbers.push_back(v);
  }

  int ans = lcm(numbers[0], numbers[1]);
  for (int i = 2; i < n; i++)
  {
    ans = lcm(ans, numbers[i]);
  }

  std::cout << "The least common multiple is " << ans << std::endl;
}