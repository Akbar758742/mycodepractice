#include <stdio.h>

int main(void) {
  // Read the input
  int n;
  scanf("%d", &n);

  int easy = 0, hard = 0;
  for (int i = 0; i < n; i++) {
    int opinion;
    scanf("%d", &opinion);
    if (opinion == 0) {
      easy++;
    } else {
      hard++;
    }
  }

  // Determine which group is larger and print the result
  if (easy > hard) {
    printf("EASY\n");
  } else if (easy < hard) {
    printf("HARD\n");
  } else {
    printf("EQUAL\n");
  }
  return 0;
}
