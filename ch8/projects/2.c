// Checks numbers for repeated digits and shows the repeated digits.

#include <stdio.h>

int main(void) {
  int digit_seen[10] = {0};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    digit_seen[digit]++;
    n /= 10;
  }

  printf("Digit:\t\t");
  for (int i = 0; i < (int) (sizeof(digit_seen) / sizeof(digit_seen[0])); i++) {
    printf("%3d", i);
  }
  printf("\n");

  printf("Occurrences:\t");
  for (int i = 0; i < (int) (sizeof(digit_seen) / sizeof(digit_seen[0])); i++) {
    printf("%3d", digit_seen[i]);
  }

  printf("\n");

  return 0;
}
