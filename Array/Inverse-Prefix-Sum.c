#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int S[n + 1];
  for (int i = 1; i <= n; i++)
  {
    scanf("%d", &S[i]);
  }
  int A[n + 1];
  A[1] = S[1];
  for (int i = 2; i <= n; i++)
  {
    A[i] = S[i] - S[i - 1];
  }
  for (int i = 1; i <= n; i++)
  {
    printf("%d ", A[i]);
  }
  printf("\n");

  return 0;
}