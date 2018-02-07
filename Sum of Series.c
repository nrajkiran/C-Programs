/* 
Task:
Your task is to write a function which returns the sum of following series upto nth term(parameter).

Series: 1 + 1/4 + 1/7 + 1/10 + 1/13 + 1/16 +...
Rules:
You need to round the answer to 2 decimal places and return it as String.

If the given value is 0 then it should return 0.00

You will only be given Natural Numbers as arguments.

Examples:
SeriesSum(1) => 1 = "1.00"
SeriesSum(2) => 1 + 1/4 = "1.25"
SeriesSum(5) => 1 + 1/4 + 1/7 + 1/10 + 1/13 = "1.57"
NOTE: In PHP the function is called series_sum().
*/

#include <stddef.h>
#include <stdlib.h>

char *series_sum(const size_t n)
{
  int i = 0, j = 1;
  float result = 0.00;
  char *res_str = malloc(50);
  memset(res_str, '\0', 50);

  for(i = 1; i <= n; i++)
  {
    result = result + (1.0 / j);
    j = j + 3;
  }

  snprintf(res_str, 50, "%.2f", result);
  
  return res_str;
}

