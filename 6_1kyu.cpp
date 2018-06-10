#include <iostream>
#include <string>

using namespace std;

int Trans(char k)
{
  switch (k)
  {
  case 'M': return 1000; break;
  case 'D': return 500; break;
  case 'C': return 100; break;
  case 'L': return 50; break;
  case 'X': return 10; break;
  case 'V': return 5; break;
  case 'I': return 1; break;
  default: return 0;
  }
}
int solution(string roman)
{
  int n = 0;
  int l = roman.length();
  if (l > 0)
  {
    for (int i = 0; i < l - 1; i++)
    {
      if (Trans(roman[i]) >= Trans(roman[i + 1]))
        n += Trans(roman[i]);
      else n -= Trans(roman[i]);
    }
    n += Trans(roman[l - 1]);
  }
  return n;
}
