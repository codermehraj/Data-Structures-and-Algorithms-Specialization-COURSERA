#include <bits/stdc++.h>

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}

int main() {
  unsigned long long a, b;
  std::cin >> a >> b;
  std::cout << (a*b)/std::__gcd(a, b) << std::endl;
  return 0;
}
