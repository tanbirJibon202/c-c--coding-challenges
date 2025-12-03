#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  int arr[4 * n - 1];
  int f[n + 1];

  // initialize frequency array
  for (int i = 0; i <= n; i++)
  {
    f[i] = 0;
  }

  // read input and count frequency
  for (int i = 0; i < 4 * n - 1; i++)
  {
    scanf("%d", &arr[i]);
    f[arr[i]]++;
  }

  int count;

  for (int i = 1; i <= n; i++)
  {
    if (f[i] == 3)
    {
      count = i;
      break;
    }
  }

  printf("%d\n", count);

  return 0;
}
