#include <stdio.h>


extern const double PI; // byc moze chodzilo o zamiane na static ale nie dziala w taki sposob
extern const double E;


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
