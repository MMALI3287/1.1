#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define MAX_STRING_SIZE 1000

int main()
{
  char str[MAX_STRING_SIZE], pick[MAX_STRING_SIZE];
  FILE *fp;
  int readCount = 0;

  srand(time(0));

  fp = fopen("Hangman.txt", "r");
  if (fp)
  {
    if (fgets(pick, MAX_STRING_SIZE, fp) != NULL)
    {
      readCount = 1;
      while (fgets(str, MAX_STRING_SIZE, fp) != NULL)
      {
        if ((rand() % ++readCount) == 0)
        {
          strcpy(pick, str);
        }
        printf("%d\t%s", readCount, str);
      }
    }
  }
  fclose(fp);
  printf("%s\n", pick);
}
