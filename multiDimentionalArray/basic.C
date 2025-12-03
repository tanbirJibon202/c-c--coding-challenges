#include <stdio.h>
/*
   Subject
   p->0
   c->1
   m->2
   b->3
   Semester 1, 2, 3
*/
int main()
{

  // int arr1[4] = {2, 4, 1, 21};
  // int arr2[4] = {5, 6, 8, 10};
  // int arr3[4] = {12, 2, 6, 16};

  //   int m, n, o, sub, sem;
  //   scanf("%d %d %d", &m, &n, &o);
  //   int arr1[m], arr2[n], arr3[o];
  //   for (int i = 0; i < m; i++)
  //     scanf("%d", &arr1[i]);
  //   for (int i = 0; i < n; i++)
  //     scanf("%d", &arr2[i]);
  //   for (int i = 0; i < o; i++)
  //     scanf("%d", &arr3[i]);
  // ;
  // printf("Enter the number of your semester:");
  // scanf("%d", &sem);
  // printf("\nEnter the code of your subject:");
  // scanf("%d", &sub);
  // if (sem == 1)
  //   printf("Your marks = %d\n", arr1[sub]);
  // else if (sem == 2)
  //   printf("Your marks = %d\n", arr2[sub]);
  // else
  //   printf("Your marks = %d\n", arr3[sub]);

  // {0, 0, 0, 0},
  // {2, 4, 1, 21},
  // {5, 6, 8, 10},
  // {12, 2, 6, 16},

  // int arr[4][4];
  // for (int sm = 1; sm < 4; sm++)
  // {
  //   for (int sb = 0; sb < 4; sb++)
  //   {
  //     scanf("%d", &arr[sm][sb]);
  //   }
  // }

  // int sub, sem;
  // printf("Enter the number of your semester:");
  // scanf("%d", &sem);
  // printf("\nEnter the code of your subject:");
  // scanf("%d", &sub);
  // printf("Your marks = %d\n", arr[sem][sub]);

  int arr[2][4][4];
  for (int roll = 1; roll < 3; roll++)
  {
    for (int sm = 1; sm < 4; sm++)
    {
      for (int sb = 0; sb < 4; sb++)
      {
        scanf("%d", &arr[roll][sm][sb]);
      }
    }
  }
  int roll, sub, sem;
  printf("Enter your roll number:");
  scanf("%d", &roll);
  printf("Enter the number of your semester:");
  scanf("%d", &sem);
  printf("\nEnter the code of your subject:");
  scanf("%d", &sub);
  printf("Your marks = %d\n", arr[roll][sem][sub]);

  return 0;
}