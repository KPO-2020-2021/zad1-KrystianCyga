#include <stdio.h>


static const double PI; //zamieniamy extern na static
static const double E;


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
