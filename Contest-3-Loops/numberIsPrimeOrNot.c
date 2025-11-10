#include <stdio.h>
#include <stdbool.h>
int main()
{
  // int n;
  // printf("Enter prime number: ");
  // scanf("%d", &n);
  // bool isPrime = true;
  // for (int i = 2; i <= n - 1; i++)
  // {
  //   if (n % i == 0)
  //   {
  //     isPrime = false;
  //     break;
  //   }
  // }

  // isPrime == true ? printf("%d is a prime number\n", n) : printf("%d is not a prime number\n", n);

  int n;
  printf("Enter prime number: ");
  scanf("%d", &n);
  bool isPrime = true;
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      isPrime = false;
      break;
    }
  }

  isPrime == true ? printf("%d is a prime number\n", n) : printf("%d is not a prime number\n", n);

  return 0;
}