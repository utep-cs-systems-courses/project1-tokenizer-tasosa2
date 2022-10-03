#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"
#define MAX_SIZE 300

int main()

{
  char user_input[MAX_SIZE];

  printf("> ");
  fgets(user_input, MAX_SIZE, stdin);
  print(user_input);
  
}
