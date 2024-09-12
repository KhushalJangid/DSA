#include <stdio.h>
#include <string.h>

int isSubstring(char* s1, char* s2)
{
  int M = strlen(s1);
  int N = strlen(s2);

  /* A loop to slide pat[] one by one */
  for (int i = 0; i <= N - M; i++) {
    int j;

    /* For current index i, check for
 pattern match */
    for (j = 0; j < M; j++)
      if (s2[i + j] != s1[j])
        break;

    if (j == M)
      return 1;
  }

  return 0;
}

int isKeyword(char word[]) {
  char keywords[32][10] = {
      "auto", "break", "case", "char", "const", "continue", "default",
      "do", "double", "else", "enum", "extern", "float", "for", "goto",
      "if", "int", "long", "register", "return", "short", "signed",
      "sizeof", "static", "struct", "switch", "typedef", "union",
      "unsigned", "void", "volatile", "while"
    };

  for (int i = 0; i < 32; ++i) {
    if (isSubstring(keywords[i],word)==1) {
      return 1;
    }
  }

  return 0;
}

int main() {
  char filename[100];
  char word[20];
  int count = 0;

  printf("Enter the filename: ");
  scanf("%s", filename);

  FILE *file = fopen(filename, "r");

  if (file == NULL) {
    printf("Error opening file!\n");
    return 0;
  }

  while (fscanf(file, "%s", word) != EOF) {
    if (isKeyword(word)) {
      count++;
      printf("%s\n", word);
    }
  }

  fclose(file);

  printf("\nTotal keywords found: %d\n", count);

  return 0;
}