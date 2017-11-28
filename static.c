#include<stdio.h>
int fun()
{
  static int count;
  count = count++  + 1;
  return count;
}
  
int main()
{
  printf("%d ", fun());
  printf("%d ", fun());
  getchar();
  return 0;
}