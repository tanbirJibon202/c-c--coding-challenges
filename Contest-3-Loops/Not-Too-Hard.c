#include <stdio.h>
int main()
{
  int NProblems, score, problem, totalScore = 0;
  scanf("%d %d", &NProblems, &score);
  for (int i = 0; i < NProblems; i++)
  {
    scanf("%d", &problem);
    // printf("%d ", problem);
    if (score >= problem)
    {
      totalScore = totalScore + problem;
    }
  }
  printf("%d", totalScore);

  return 0;
}