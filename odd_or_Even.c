#include <stdio.h>
int main()
{
  int a;
  printf("Enter an Integer : ");
  scanf("%d", &a);
  if (a % 2 == 0)
  {
    printf("%d is an Even number.\n", a);
  }
  else
  {
    printf("%d id an Odd number.\n", a);
  }
  return 0;
}
