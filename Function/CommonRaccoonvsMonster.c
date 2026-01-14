#include <stdio.h>

int sum(int arr[], int n)
{
  int s = 0;
  for (int i = 0; i < n; i++)
  {
    s = s + arr[i];
  }
  return s;
};

int main()
{
  int h, n;
  scanf("%d%d", &h, &n);

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int damage = sum(arr, n);

  if (damage < h)
  {
    printf("No\n");
  }
  else
  {
    printf("Yes\n");
  }

  return 0;
}
