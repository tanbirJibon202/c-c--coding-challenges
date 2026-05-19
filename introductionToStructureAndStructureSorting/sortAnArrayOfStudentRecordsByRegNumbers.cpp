#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct info{
   char registerNumber[15];
   char name[25];
   float cgpa;
};
int cmp(const void *a, const void *b){
   struct info *x = (struct info *)a;
   struct info *y = (struct info *)b;
   return strcmp(x->registerNumber, y->registerNumber);
}
int main(){
   int n;
   scanf("%d", &n);
   struct info student[n];
   for(int i = 0; i < n; i++){
      scanf("%s %s %f",
            student[i].registerNumber,
            student[i].name,
            &student[i].cgpa);
   }
  qsort(student, n, sizeof(struct info), cmp);
      for(int i = 0; i < n; i++){

      printf("%s %s %.2f\n",
             student[i].registerNumber,
             student[i].name,
             student[i].cgpa);
   }
   return 0;
}