#include <ctype.h>
#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
  char c, message[MAX_SIZE] = {0};
  int i = 0;

  printf("Enter message: ");
  while((c = getchar()) != '\n' && i < MAX_SIZE) {
    message[i] = c;
    i++;
  }

  for (i = 0; i < MAX_SIZE; i++) {
    switch (toupper(message[i])) {
    case 'A':
      putchar('4');
      break;
    case 'B':
      putchar('8');
      break;
    case 'E':
      putchar('3');
      break;
    case 'I':
      putchar('1');
      break;
    case 'O':
      putchar('0');
      break;
    case 'S':
      putchar('5');
      break;
    default:
      putchar(toupper(message[i]));
      break;
    }
  }

  printf("!!!!!!!!!!\n");
  return 0;
}
