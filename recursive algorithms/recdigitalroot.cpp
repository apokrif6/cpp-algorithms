#include <iostream>
#include <cmath>

int recdigitalroot(int n)
{
  if (n == 0) {
    return 0;
  }
  
  int countDigits = log10(n) + 1;
  
  if (countDigits == 1) {
    return n;
  }
  
  auto getSum = [](int n)
  {
      int sum = 0;
    
      while (n != 0) {
          sum = sum + n % 10;
          n = n / 10;
      }
    
      return sum;
  };
    
  return recdigitalroot(getSum(n));
}
